NAME = libft.a

SRC = ./src/ft_strjoin.c ./src/ft_strlen.c ./src/ft_substr.c

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