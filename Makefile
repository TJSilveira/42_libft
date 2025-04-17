NAME = libft.a

SRC = ./src/ft_strjoin.c ./src/ft_strlen.c ./src/ft_substr.c ./src/ft_strtrim.c ./src/is_incset.c ./src/ft_split.c ./src/ft_strdup.c ./src/ft_itoa.c ./src/ft_strmapi.c ./src/ft_putchar_fd.c ./src/ft_putendl_fd.c ./src/ft_putnbr_fd.c ./src/ft_putstr_fd.c ./src/ft_memset.c ./src/ft_bzero.c ./src/ft_memcpy.c ./src/ft_memccpy.c ./src/ft_memmove.c ./src/ft_memchr.c ./src/ft_memcmp.c ./src/ft_strlcpy.c ./src/ft_strlcat.c ./src/ft_strchr.c ./src/ft_strrchr.c ./src/ft_strnstr.c ./src/ft_strncmp.c ./src/ft_atoi.c ./src/ft_isalpha.c ./src/ft_isdigit.c ./src/ft_isalnum.c ./src/ft_isascii.c ./src/ft_isprint.c ./src/ft_toupper.c ./src/ft_tolower.c ./src/ft_calloc.c

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
