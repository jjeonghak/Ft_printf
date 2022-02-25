ifdef BONUS
		OBJ_ALL = ${OBJ_B}
		INC_H = ${INC_B}
else
		OBJ_ALL = ${OBJ}
		INC_H = ${INC}
endif

NAME = libftprintf.a

LIBFT = ./libft/
LIBFT_A = libft.a

CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

SRC = ft_printf.c \
	ft_printf_nbr.c \
	ft_printf_parsing.c \
	ft_printf_str.c \
	ft_printf_utils.c

SRC_B = ft_printf_bonus.c \
	ft_printf_nbr_bonus.c \
	ft_printf_parsing_bonus.c \
	ft_printf_str_bonus.c \
	ft_printf_utils_bonus.c

OBJ = ${SRC:.c=.o}
OBJ_B = ${SRC_B:.c=.o}

INC = ft_printf.h
INC_B = ft_printf_bonus.h

all: ${NAME}

%.o: %.c ${INC_H}
		${CC} ${CFLAGS} -c $< -o $@

${NAME}: ${OBJ_ALL}
		make all -C ${LIBFT}
		cp ${addprefix ${LIBFT}, ${LIBFT_A}} ${NAME}
		ar rcs ${NAME} ${OBJ_ALL}

bonus:
		make BONUS=1 all

clean:
		${RM} ${OBJ} ${OBJ_B}
		make clean -C ${LIBFT}

fclean: clean
		${RM} ${NAME}
		make fclean -C ${LIBFT}

re: fclean all

.PHONY: bonus fclean clean re all
