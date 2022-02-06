#include<stdio.h>

int	main(void)
{
	printf("********************************************************************************\n");
	printf("*                                                                              *\n");
	printf("*                                TEST : PRINTF                                 *\n");
	printf("*                             	   jeonghak                                    *\n");
	printf("*                                                                              *\n");
	printf("********************************************************************************\n");


	printf("\n\n");
        printf("********************************************************************************\n");
        printf("*                                                                              *\n");
	printf("*                                specifier : p                                 *\n");
	printf("*                                                                              *\n");
	printf("********************************************************************************\n");

	printf("\n< argument : NULL >\n");
	printf("flags : width : precision : va_arg : NULL, result : %p$\n", NULL);
	printf("flags : width : 0, precision : va_arg : NULL, result : %0p$\n", NULL);
	printf("flags : width : 10, precision : va_arg : NULL, result : %10p$\n", NULL);
	printf("flags : 0, width : 10, precision : va_arg : NULL, result : %010p$\n", NULL);
	printf("flags : #, width : 10, precision : va_arg : NULL, result : %#10p$\n", NULL);
	printf("flags : +, width : 10, precision : va_arg : NULL, result : %+10p$\n", NULL);
	printf("flags : -, width : 10, precision : va_arg : NULL, result : %-10p$\n", NULL);

	printf("\n< precision : NULL >\n");
	printf("flags : width : precision : 0, va_arg : 1234, result : %.0p$\n", 1234);
	printf("flags : width : 0, precision : 0, va_arg : 1234, result : %0.0p$\n", 1234);
	printf("flags : width : 10, precision : 0, va_arg : 1234, result : %10.0p$\n", 1234);
	printf("flags : 0, width : 10, precision : 0, va_arg : 1234, result : %010.0p$\n", 1234);	
	printf("flags : #, width : 10, precision : 0, va_arg : 1234, result : %#10.0p$\n", 1234);
	printf("flags : +, width : 10, precision : 0, va_arg : 1234, result : %+10.0p$\n", 1234);
	printf("flags : -, width : 10, precision : 0, va_arg : 1234, result : %-10.0p$\n", 1234);

	printf("\n< argument & precision : NULL >\n");
	printf("flags : width : precision : 0, va_arg : NULL, result : %.0p$\n", NULL);
	printf("flags : width : 0, precision : 0, va_arg : NULL, result : %0.0p$\n", NULL);
	printf("flags : width : 10, precision : 0, va_arg : NULL, result : %10.0p$\n", NULL);
	printf("flags : 0, width : 10, precision : 0, va_arg : NULL, result : %010.0p$\n", NULL);
	printf("flags : #, width : 10, precision : 0, va_arg : NULL, result : %#10.0p$\n", NULL);
	printf("flags : +, width : 10, precision : 0, va_arg : NULL, result : %+10.0p$\n", NULL);
	printf("flags : -, width : 10, precision : 0, va_arg : NULL, result : %-10.0p$\n", NULL);

	printf("\n\n");
        printf("********************************************************************************\n");
        printf("*                                                                              *\n");
	printf("*                                specifier : s                                 *\n");
        printf("*                                                                              *\n");
	printf("********************************************************************************\n");
	printf("\n< argument : NULL >\n");
	printf("flags : width : precision : va_arg : NULL, result : %s$\n", NULL);
	printf("flags : width : 10, precision : va_arg : NULL, result : %10s$\n", NULL);
	printf("flags : 0, width : 10, precision : va_arg : NULL, result : %010s$\n", NULL);
	printf("flags : #, width : 10, precision : va_arg : NULL, result : %#10s$\n", NULL);
	printf("flags : +, width : 10, precision : va_arg : NULL, result : %+10s$\n", NULL);
	printf("flags : -, width : 10, precision : va_arg : NULL, result : %-10s$\n", NULL);

	printf("\n< precision : NULL >\n");
	printf("flags : width : precision : 0, va_arg : abcd, result : %.0s$\n", "abcd");
	printf("flags : width : 0, precision : 0, va_arg : abcd, result : %0.0s$\n", "abcd");
	printf("flags : width : 10, precision : 0, va_arg : abcd, result : %10.0s$\n", "abcd");

	printf("\n< width & precision >\n");
        printf("flags : width : 10, precision : 100, va_arg : abcd, result : %10.100s$\n", "abcd");

	printf("\n< width(=flags) >\n");
	printf("flags : width : 10, precision : va_arg : abcd, result : %10s$\n", "abcd");
	printf("flags : width : -10, precision : va_arg : abcd, result : %-10s$\n", "abcd");
	

	printf("\n< precision flags >\n");
	printf("flags : width : precision : 10, va_arg : abcd, result : %.10s$\n", "abcd");
	printf("flags : width : precision : -10, va_arg : abcd, result : %.-10s$\n", "abcd");
	printf("flags : width : precision : -+10, va_arg : abcd, result : %.-+10s$\n", "abcd");
	printf("flags : width : precision : +-10, va_arg : abcd, result : %.+-10s$\n", "abcd");
	printf("flags : width : precision : -+-10, va_arg : abcd, result : %.-+-10s$\n", "abcd");
	printf("flags : width : precision : +-+10, va_arg : abcd, result : %.+-+10s$\n", "abcd");
	printf("flags : width : precision : -+-+10, va_arg : abcd, result : %.-+-+10s$\n", "abcd");
	printf("flags : width : precision : +-+-10, va_arg : abcd, result : %.+-+-10s$\n", "abcd");
	printf("flags : width : precision : -+-+-10, va_arg : abcd, result : %.-+-+-10s$\n", "abcd");	
	printf("flags : width : precision : +-+-+10, va_arg : abcd, result : %.+-+-+10s$\n", "abcd");

	printf("\n< argument flags : precision >\n");
	printf("flags : width : precision : *, va_arg : 10, abcd, result : %.*s$\n", 10, "abcd");
	printf("flags : width : precision : *, va_arg : -10, abcd, result : %.*s$\n", -10, "abcd");
	printf("flags : width : precision : *, va_arg : -+10, abcd, result : %.*s$\n", -+10, "abcd");
	printf("flags : width : precision : *, va_arg : +-10, abcd, result : %.*s$\n", +-10, "abcd");	
	printf("flags : width : precision : *, va_arg : -+-10, abcd, result : %.*s$\n", -+-10, "abcd");
	printf("flags : width : precision : *, va_arg : +-+10, abcd, result : %.*s$\n", +-+10, "abcd");
	printf("flags : width : precision : *, va_arg : -+-+10, abcd, result : %.*s$\n", -+-+10, "abcd");
	printf("flags : width : precision : *, va_arg : +-+-10, abcd, result : %.*s$\n", +-+-10, "abcd");
	printf("flags : width : precision : *, va_arg : -+-+-10, abcd, result : %.*s$\n", -+-+-10, "abcd");
	printf("flags : width : precision : *, va_arg : +-+-+10, abcd, result : %.*s$\n", +-+-+10, "abcd");


	printf("\n< argument flags : width >\n");
        printf("flags : width : *, precision : va_arg : 10, abcd, result : %*s$\n", 10, "abcd");
        printf("flags : width : *, precision : va_arg : -10, abcd, result : %*s$\n", -10, "abcd");
        printf("flags : width : *, precision : va_arg : -+10, abcd, result : %*s$\n", -+10, "abcd");
        printf("flags : width : *, precision : va_arg : +-10, abcd, result : %*s$\n", +-10, "abcd");
        printf("flags : width : *, precision : va_arg : -+-10, abcd, result : %*s$\n", -+-10, "abcd");
        printf("flags : width : *, precision : va_arg : +-+10, abcd, result : %*s$\n", +-+10, "abcd");
        printf("flags : width : *, precision : va_arg : -+-+10, abcd, result : %*s$\n", -+-+10, "abcd");
        printf("flags : width : *, precision : va_arg : +-+-10, abcd, result : %*s$\n", +-+-10, "abcd");
        printf("flags : width : *, precision : va_arg : -+-+-10, abcd, result : %*s$\n", -+-+-10, "abcd");
        printf("flags : width : *, precision : va_arg : +-+-+10, abcd, result : %*s$\n", +-+-+10, "abcd");

	printf("\n\n");
	printf("********************************************************************************\n");
	printf("*                                                                              *\n");
	printf("*                               specifier : x, X                               *\n");
	printf("*                                                                              *\n");
	printf("********************************************************************************\n");

	printf("\n< argument : NULL >\n");
	printf("flags : width : precision : va_arg : NULL, result : %x$\n", NULL);
	printf("flags : width : 0, precision : va_arg : NULL, result : %0x$\n", NULL);
	printf("flags : width : 10, precision : va_arg : NULL, result : %10x$\n", NULL);
	printf("flags : 0, width : 10, precision : va_arg : NULL, result : %010x$\n", NULL);
	printf("flags : #, width : 10, precision : va_arg : NULL, result : %#10x$\n", NULL);
	printf("flags : +, width : 10, precision : va_arg : NULL, result : %+10x$\n", NULL);
	printf("flags : -, width : 10, precision : va_arg : NULL, result : %-10x$\n", NULL);


	printf("\n< precision : NULL >\n");
	printf("flags : width : precision : 0, va_arg : 0, result : %.0x$\n", 0);	
	printf("flags : width : 0, precision : 0, va_arg : 0, result : %0.0x$\n", 0);
	printf("flags : width : 10, precision : 0, va_arg : 0, result : %10.0x$\n", 0);	
	printf("flags : 0, width : 10, precision : 0, va_arg : 0, result : %010.0x$\n", 0);
	printf("flags : #, width : 10, precision : 0, va_arg : 0, result : %#10.0x$\n", 0);
	printf("flags : +, width : 10, precision : 0, va_arg : 0, result : %+10.0x$\n", 0);
	printf("flags : -, width : 10, precision : 0, va_arg : 0, result : %-10.0x$\n", 0);

	printf("\n< width & precision >\n");
	printf("flags : width : 5, precision : 10, va_arg : 1234, result : %5.10x$\n", 1234);

	printf("\n< precision flags >\n");
	printf("flags : width : precision : -10, va_arg : 1234, result : %.-10x$\n", 1234);
	printf("flags : width : precision : 010, va_arg : 1234, result : %.010x$\n", 1234);
        printf("flags : width : precision : (space)10, va_arg : 1234, result : %. 10x$\n", 1234);
        printf("flags : width : precision : +10, va_arg : 1234, result : %.+10x$\n", 1234);
	printf("flags : width : precision : --10, va_arg : 1234, result : %.--10x$\n", 1234);
	printf("flags : width : precision : ++10, va_arg : 1234, result : %.++10x$\n", 1234);
	printf("flags : width : precision : -+10, va_arg : 1234, result : %.-+10x$\n", 1234);
	printf("flags : width : precision : +-10, va_arg : 1234, result : %.+-10x$\n", 1234);
	printf("flags : -, width : precision : +10, va_arg : 1234, result : %-.+10x$\n", 1234);
	printf("flags : +, width : precision : -10, va_arg : 1234, result : %+.-10x$\n", 1234);
	
	printf("\n< argument flags : precision >\n");
	printf("flags : width : precision : *, va_arg : -10, 1234, result : %.*x$\n", -10, 1234);
	printf("flags : width : precision : *, va_arg : +-10, 1234, result : %.*x$\n", +-10, 1234);
	printf("flags : width : precision : *, va_arg : -+10, 1234, result : %.*x$\n", -+10, 1234);
	printf("flags : width : precision : *, va_arg : -+-10, 1234, result : %.*x$\n", -+-10, 1234);
	printf("flags : width : precision : *, va_arg : +-+10, 1234, result : %.*x$\n", +-+10, 1234);
	printf("flags : width : precision : *, va_arg : -+-+10, 1234, result : %.*x$\n", -+-+10, 1234);
	printf("flags : width : precision : *, va_arg : +-+-10, 1234, result : %.*x$\n", +-+-10, 1234);
	printf("flags : width : precision : *, va_arg : -+-+-10, 1234, result : %.*x$\n", -+-+-10, 1234);
	printf("flags : width : precision : *, va_arg : +-+-+10, 1234, result : %.*x$\n", +-+-+10, 1234);

/* error: lvalue required as increment operand */
//	printf("flags : width : precision : *, va_arg : --10, 1234, result : %.*x$\n", --10, 1234);
//      printf("flags : width : precision : *, va_arg : ++10, 1234, result : %.*x$\n", ++10, 1234);
//	printf("flags : width : precision : *, va_arg : ---10, 1234, result : %.*x$\n", ---10, 1234);
//	printf("flags : width : precision : *, va_arg : -++10, 1234, result : %.*x$\n", -++10, 1234);
//      printf("flags : width : precision : *, va_arg : +--10, 1234, result : %.*x$\n", +--10, 1234);
//      printf("flags : width : precision : *, va_arg : ++-10, 1234, result : %.*x$\n", ++-10, 1234);
//      printf("flags : width : precision : *, va_arg : +++10, 1234, result : %.*x$\n", +++10, 1234);

	printf("\n< argument flags : width >\n");
	printf("flags : width : *, precision : va_arg : -10, 1234, result : %*x$\n", -10, 1234);
	printf("flags : width : *, precision : va_arg : -+10, 1234, result : %*x$\n", -+10, 1234);
	printf("flags : width : *, precision : va_arg : +-10, 1234, result : %*x$\n", +-10, 1234);
	printf("flags : width : *, precision : va_arg : -+-10, 1234, result : %*x$\n", -+-10, 1234);
	printf("flags : width : *, precision : va_arg : +-+10, 1234, result : %*x$\n", +-+10, 1234);
        printf("flags : width : *, precision : va_arg : -+-+10, 1234, result : %*x$\n", -+-+10, 1234);
        printf("flags : width : *, precision : va_arg : +-+-10, 1234, result : %*x$\n", +-+-10, 1234);
        printf("flags : width : *, precision : va_arg : -+-+-10, 1234, result : %*x$\n", -+-+-10, 1234);
        printf("flags : width : *, precision : va_arg : +-+-+10, 1234, result : %*x$\n", +-+-+10, 1234);


	printf("\n\n");
	printf("********************************************************************************\n");
	printf("*                                                                              *\n");
	printf("*                               specifier : d, i                               *\n");
	printf("*                                                                              *\n");
	printf("********************************************************************************\n");

	//printf("%*d", 2147483647, 1);
	//printf("\n%*d", 2147483647, 1);
	//printf("%*d", 2147483648, 1);
	
	printf("\n\n\n");
	return 0;
}
