# **Ft_printf**

##### Because putnbr and putstr aren't enough

putnbr와 putstr으로는 만족할 수 없기 때문에

**이 프로젝트의 목적은 printf 함수를 구현하는 것입니다.**

<br>

## Information

- #### _buffering : linux 파일 입출력의 물리적인 파일 조회 및 기록 횟수를 최소화하여 성능을 높이기 위해 사용_
	1. fully buffered : 설정한 버퍼의 사이즈가 채워지면 버퍼에 있는 데이터 전송방식
	2. line buffered : 버퍼에 개행 문자가 입력될 때마다 버퍼에 있는 데이터 전송방식
	3. unbuffered : 버퍼를 통해 데이터 전송이 되지않고 직접적으로 쓰여지는 방식

- #### _byte padding : 클래스 및 구조체에 바이트를 추가해 cpu 접근부하 감소_
 	32bit씩 접근하므로 char형과 같이 4바이트가 안되는 데이터에 바이트 추가

- #### _variadic arguments(가변인수) : 인수의 개수와 타입이 미리 정해져 있지 않음_

- #### _stdarg.h(macro function)_

	#include<stdarg.h>
	
	#define _INTSIZEOF(n)_ ((sizeof(n) + sizeof(int) - 1) & ~(sizeof(int) - 1))
	 타입의 크기를 인트형 크기(4)의 배수로 올림, 바이트 패딩을 통해 cpu 접근부하 감소
	 
	#define va_start(ap, v) (ap = (va_list) & v + _INTSIZEOF(v)_)
	 ap는 마지막 고정인수 v의 주소값에서 v의 패딩된 크기만큼 더한 주소값으로 초기화 
	 
	#define va_arg(ap, t) (* (t * )((ap += _INTSIZEOF(t)_) - _INTSIZEOF(t)_))
	 1. ap를 일단 다음 가변 인수 위치로 보냄
	 2. ap를 증가시킨 후 기존 주소로 재이동 
	 3. t형 포인터로 타입 캐스팅 
	 4. ap 번지의 t형 데이터를 읽는다 
	
	#define va_end(ap) (ap = (va_list)0)	

- #### _va_list	ap : 함수로 전달되는 인수들은 스택에 저장되며 함수는 스택에서 인수를 꺼내 사용_
	
	스택에 있는 인수를 읽을 때 주소연산을 해야하며 현재 읽고 있는 번지를 기억하기 위해 va_list 형의 변수가 필요, va_list는 char * 로 정의되어 있음
	
	type	char * va_list;

- #### _va_start(ap, 마지막 고정인수) : ap 포인터 변수가 첫 번째 가변인수를 가리키도록 초기화(가변인수를 읽기위한 준비)_
	
	void	va_start(va_list ap, last);
	
	첫번째 가변인수 주소값 탐색을 위한 마지막 고정인수를 알규먼트로 전달

- #### _va_arg(ap, 인수타입) : ap 주소 위치의 인덱스값을 읽어들임_
	
	type	va_arg(va_list ap, type);
	
	제대로 된 값을 읽기위해 데이터 타입명을 알규먼트로 전달
	
	매크로 함수이며 내부적으로 sizeof 연산자와 캐스트 연산자로 전달되어 타입명 전달 가능

- #### _va_end(ap) : 별다른 동작없음_
	
	void	va_end(va_list ap);
	
	실행되지 않아도 지장은 없지만 호환성 때문에 플랫폼에 따라 후처리 필요한 경우사용

- #### _가변인수 함수 : 반드시 하나 이상의 고정인수 필요(가변인수 시작주소를 알기위해)_

- #### int ft_printf(const char *format, ...)

	**_format specifier prototype : %[flags width .precision length] specifier_**

- [flags]

	- : 주어진 필드의 왼쪽정렬(기본 : 오른쪽 정렬)
	
	+ : 부호 출력
	
	(space) : 부호가 출력되지 않는다면 공백 출력
	
	# : 0, 0x, 0X 출력(a, A, e, E, f, F, g, G 형식 지정자와 사용)
	
	0 : 길이 지정시 공백대신 0출력

[width]

	(number) : 최소인쇄길이, 공백을 이용해서 최소인쇄길이까지 채워 출력
	
	* : 가변인수로 길이 결정

[.precision]

	.number : (d, i, o, u, x, X) 서식자의 경우 앞에 number만큼 0으로 채워서 출력
	
		  (a, A, e, E, f, F) 서식자의 경우 number만큼 소수점자리 출력
		
	.* : 가변인수로 정밀도 결정

specifier

	d : signed 10진수 정수
	
	i : signed 10, 8, 16진수 정수(output %d와의 차이는 없으나 scanf에서 차이 발생)
	
	u : unsigned 10진수 정수
	
	o : unsigned 8진수
	
	x : unsigned 16진수 정수
	
	X : x와 동일하나 대문자로 출력
	
	f : 10진수 부동 소수점
	
	F : f와 동일하나 대문자로 출력
	
	e : 기수표기법(3.9265e+2)
	
	E : e와 동일하나 대문자로 출력(3.9265E+2)
	
	g : f와 e 중 가장 짧은 표현 사용
	
	G : F와 E 중 가장 짧은 표현 사용
	
	a : 16진수 부동 소수점(-0xc.90fep-2)
	
	A : a와 동일하나 대문자로 출력(-0XC.90FEP-2)
	
	c : 문자형 출력
	
	s : 문자열 출력
	
	p : 포인터 주소값 출력
	
	n : 아무것도 인쇄되지 않으며 지금까지 쓴 문자의 수를 가리키는 정수 포인터로 저장
	
	% : % 출력

<br>

## Function Instructions

##### 1.	ft_printf : 문자열 포멧에 맞게 문자열 출력
		97 : result 출력한 문자열의 길이, 출력 실패시 -1
		98 : ap 가변인수 리스트
		100-101 : 마지막 고정인수가 존재하지 않는 경우 -1 반환
		102 : 가변인수 리스트 초기화, 마지막 고정인수의 맨 끝 주소값으로 설정
		103 : parse_format 호출
		104 : 가변인수 리스트 후처리
		105 : result 반환

##### 2.	parse_format : 마지막 고정인수 문자열 파싱
		68 : i 문자열 순회를 위한 변수
		69 : fs 문자열 내의 format specifier prototype 저장
		70 : pcnt 출력 문자열의 길이 저장
		77-82 : 문자열 인덱스가 '%'인 경우 format specifier 파싱
				parse_subseq 호출
		83-87 : 문자열 출력 후 출력길이 +1
		89-90 : 출력 중 오류발생시 -1 반환 

##### 3.	parse_subseq : 문자열 내의 format specifier prototype 파싱
		41-53 : specifier 이전의 각 요소 파싱
				flag, width, precision, specifier 구분
		54-58 : 파싱 중 오류발생시 error 플래그 1
		59-63 : 정상적인 경우 parse_specifier 호출

##### 4.	check_error : 파싱 중 오류발생 점검
		30-31 : 문자열 종료시 1 반환
		32-33 : 파싱한 width 크기와 기존 출력길이 합이 INT_MAX 초과인 경우 1 반환
		34-35 : 문자열과 문자형 출력의 경우 precision 크기가 INT_MAX 초과하는 경우도 정상출력, 0 반환
		34-35 : 파싱한 precision 크기와 기존 출력길이 합이 INT_MAX 초과인 경우 1 반환
		38 : 정상출력, 0 반환

##### 5.	init_format_specifier : format specifier prototype 저장을 위한 변수 초기화

##### 6.	select_sign : 출력 문자열의 부호 문자형 선택

##### 7.	parsing_flags : format의 flags 비트 플래그로 파싱(flags value : 0 ~ 31)
		30-31 : '-' flag 존재시 10000(2)
		32-33 : '+' flag 존재시 01000(2)
		34-35 : ' ' flag 존재시 00100(2)
		36-37 : '#' flag 존재시 00010(2)
		34-35 : '0' flag 존재시 00001(2)

##### 8.	parse_width : format의 width 파싱(width value : 0 ~ INT_MAX)
		47 : result 결과값을 저장한 변수
		49-58 : 인덱스 값이 정수가 아닌 '*'일 경우 알규먼트 값, 만약 음수인 경우 flags '-'로 취급
		59-60 : atoi_format 호출
		61 : width에 결과값 저장

##### 9.	parse_precision : format의 precision 파싱
		67 : result 결과값을 저장할 변수
		69 : '.' 이후의 인덱스 값부터 파싱
		70-74 : 인덱스 값이 정수가 아닌 '*'알 경우 알규먼트 값
		75-76 : atoi_format 호출
		77-78 : 음수인 경우를 제외하고 precision에 결과값 저장

##### 10.	parse_specifier : format의 specifier 파싱
		84 : n 알규먼트 값 저장을 위한 변수
		86-87 : 'c' specifier인 경우 print_width_char 호출
		88-89 : 's' specifier인 경우 print_width_str 호출
		90-91 : '%' specifier인 경우 print_width_char 호출
		92-93 : 정수 출력은 precision 의해 '0' flag 무시
		94-95 : 'p' specifier인 경우 print_nbr 호출
		96-101 : select_sign과 print_nbr 호출

##### 11.	print_width : flags에 따라 len만큼 문자출력
		17 : chr flags 비트 플래그 확인을 위한 변수
		19 : '-' flag 및 '0' flag 비트확인
		22-23 : chr이 1인 경우는 '-' flag는 존재하지 않으며 '0' flag만 존재하는 경우 '0' 출력
		24-25 : 나머지 경우 ' ' 출력

##### 12.	print_width_char : width 크기에 따라 문자형 출력
		32-36 : 기존 출력길이와 새로운 출력길이 합이 INT_MAX 초과시 error 플래그 1
		37 : width 크기가 1보다 큰 경우 width 출력
		39-43 : '-' flag 존재시 width 후출력
		44-48 : 나머지 경우 width 선출력
		51 : width 크기가 0이거나 음수인 경우 문자형만 출력

##### 13.	print_width_str : width 크기에 따라 문자열 출력
		57 : len 출력 문자열의 길이
		59-60 : 알규먼트가 null인 경우 문자열 "(null)" 인자로 재귀호출
		61-62 : precision이 존재할 경우 최대 precision 크기만큼 메모리 할당
		66-67 : 기존 출력길이와 문자열의 길이 합이 INT_MAX 초과시 error 플래그 1
		68-69 : 문자열의 길이가 width 크기보다 큰 경우 문자열 출력
		70-71 : 메모리 할당한 경우 메모리 해제
		72 : 문자열 길이 반환
		74-78 : '-' flag 존재 유무에 따라 width 출력
		79-80 : 메모리 할당한 경우 메모리 해제
		81 : width 반환

##### 14.	putchar_buf : size 크기만큼 메모리 할당 후 정수값 c로 초기화
		17 : buf 메모리 할당 후 초기화될 포인터
		18 : cnt 주소값 연산을 위한 변수
		21-22 : size 크기가 양수가 아닐 경우 빈문자열 반환
		23-25 : size 크기만큼 메모리 할당
		26-31 : 메모리 할당된 주소의 인덱스값 c 초기화
		32 : buf 반환

##### 15.	atoi_format : format 내의 문자열 정수로 변환
		37 : result 결과값 저장을 위한 변수
		40-47 : 문자열 인덱스가 정수이고 결과값이 INT_MAX 미만인 경우 정수로 변환
		49 : result 반환

##### 16.	intlen_base : 진법에 따른 정수 길이 반환
		54 : cnt 정수 길이
		57-61 : base로 나누면서 cnt + 1
		62-63 : cnt가 0인 경우 정수길이 1 반환
		64 : cnt 반환

##### 17.	ntoa_base : 진법에 따라 정수 문자열로 변환
		17 : nbr 결과 저장을 위한 변수
		18 : temp 문자열 메모리 할당 후 메모리 해제를 위한 변수
		19 : size 진법에 따른 정수 길이
		21-22 : 음수 처리가 필요한 경우 보수에 따른 양수화 계산
		23 : intlen_base 결과값 size에 저장
		24-25 : precision 크기가 0, n이 0인 경우 빈문자열 반환
		26-27 : 정수 길이만큼 width와 precision 감소
		34 : ft_substr 결과값 temp에 저장
		35-36 : 'X' specifier인 경우 ft_toupper 호출, 대문자화
		37-38 : nbr에 한 문자씩 저장
		41 : nbr 반환

##### 18.	add_prefix : 문자열의 접두사 반환
		46 : buf 접두사 저장을 위한 변수
		48-57 : 'p', 'x', 'X' specifier의 경우 16진법 및 flag에 따라 "0x" 또는 "0X" 추가
		58-59 : flag와 부호 유무에 따라 부호추가
		62-63 : 문자열 메모리 할당 성공시 문자열의 길이만큼 width 감소
		64 : buf 반환

##### 19.	add_suffix : 문자열의 접미사 반환
		69 : mid 접두사와 접미사 사이 문자열
		70 : suffix 접미사 저장을 위한 변수
		71 : size 문자열 길이
		76-77 : precision 크기가 음수인 경우 -1로 설정
		78-82 : precision 크기가 -1이 아닌 경우 width 감소 및 size 증가
		83-87 : width 크기만큼 접두사와 접미사 사이 문자열이 존재하는 경우
		88 : size 크기만큼 putchar_buf 호출
		89 : mid, nbr 병합해서 suffix 생성
		90 : 메모리 해제
		91 : suffix 반환

##### 20.	merge_width : 접미사와 접두사 및 width 병합 함수
		97 : result 결과를 저장할 변수
		98 : temp 문자열 메모리 할당 후 메모리 해제를 위한 변수
		103-104 : '-' flag 존재 또는 '0' flag 없는 경우 ' '로 width 설정
		105-106 : 나머지 경우 '0'으로 width 설정
		112 : 접두사와 접미사 병합해서 temp에 저장
		113-116 : flag에 따라 width 병합순서 결정
		117-118 : 메모리 해제
		119 : result 반환

##### 21.	print_nbr : format에 따라 정수 출력
		124 : buf 최종 출력을 위한 포인터
		125 : prefix 접두사
		126 : suffix 접미사
		127 : nbr 실제 정수부분 문자열
		128 : result 최종 출력 길이
		130-133 : 각각의 변수 메모리 할당 및 값 할당 함수 호출
		134-138 : 최종 출력을 위한 buf 메모리 할당 모류 발생시 error 플래그 1
		139-143 : 나머지 경우 출력
		144-147 : 메모리 해제
		148 : result 반환

