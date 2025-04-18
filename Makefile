NAME = libft.a
AR = ar -rcs
CC = gcc

# Directories
SRC_DIR = ./src/

SRC_FILES = ft_strjoin.c \
		ft_strlen.c \
		ft_substr.c \
		ft_strtrim.c \
		ft_split.c \
		ft_strdup.c \
		ft_itoa.c \
		ft_strmapi.c \
		ft_putchar_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_putstr_fd.c \
		ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memccpy.c \
		ft_memmove.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strnstr.c \
		ft_strncmp.c \
		ft_atoi.c \
		ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_calloc.c

BONUS_FILES = ft_lstnew_bonus.c \
		ft_lstadd_front_bonus.c \
		ft_lstsize_bonus.c \
		ft_lstlast_bonus.c \
		ft_lstadd_back_bonus.c \
		ft_lstdelone_bonus.c \
		ft_lstclear_bonus.c \
		ft_lstiter_bonus.c \
		ft_lstmap_bonus.c \
		ft_is_incset_bonus.c \
		ft_putstr_var_fd_bonus.c

TESTFILE = $(addprefix $(SRC_DIR),test.c)

# CC Flags
CFLAGS = -Wall -Wextra -Werror

# Add directory prefix to source files
SRC = $(addprefix $(SRC_DIR),$(SRC_FILES))
SRC_BONUS = $(addprefix $(SRC_DIR),$(BONUS_FILES))

# Include directory flags
INCLUDES = -I ./includes/

# Object files
OBJS = $(SRC:.c=.o)
OBJS_BONUS = $(SRC_BONUS:.c=.o)
OBJS_TEST = $(TESTFILE:.c=.o)

all: ${NAME}

${NAME}: ${OBJS}
	${AR} ${NAME} ${OBJS}

bonus: ${OBJS} ${OBJS_BONUS}
	${AR} ${NAME} ${OBJS} ${OBJS_BONUS}

test: ${OBJS} ${OBJS_BONUS} ${OBJS_TEST}
	${CC} ${CFLAGS} ${OBJS} ${OBJS_BONUS} ${OBJS_TEST} -o test

%.o: %.c
	${CC} ${CFLAGS} -c ${INCLUDES} $< -o $@

clean:
	rm -f ${OBJS} ${OBJS_TEST} ${OBJS_BONUS}

fclean: clean
	rm -f ${NAME} test

re: fclean all

retest: fclean test

.PHONY: all clean fclean re
