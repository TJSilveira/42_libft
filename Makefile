NAME = libft.a

SRC = ./src/ft_strjoin.c ./src/ft_strlen.c ./src/ft_substr.c ./src/ft_strtrim.c ./src/is_incset.c ./src/ft_split.c ./src/ft_strdup.c ./src/ft_itoa.c ./src/ft_strmapi.c ./src/ft_putchar_fd.c ./src/ft_putendl_fd.c ./src/ft_putnbr_fd.c ./src/ft_putstr_fd.c ./src/ft_memset.c ./src/ft_bzero.c ./src/ft_memcpy.c ./src/ft_memccpy.c

TESTFILE = ./src/test.c

INCLUDES = -I ./includes/

OBJS = $(SRC:.c=.o) $(TESTFILE:.c=.o)

CFLAGS = -Wall -Wextra -Werror

AR = ar -rcs

CC = gcc

all: ${NAME}

${NAME}: ${OBJS}
	${AR} ${NAME} ${OBJS}

test: ${OBJS}
	${CC} ${CFLAGS} ${OBJS} -o test

${OBJS}:
	${CC} ${CFLAGS} -c ${INCLUDES} ${@:.o=.c} -o ${@}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME} test

re: fclean test

.PHONY: all clean fclean re
