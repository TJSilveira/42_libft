#ifndef LIBFT_H
#define LIBFT_H
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

char *ft_substr(char const *s, unsigned int start, size_t len);
size_t ft_strlen(const char *s);
char *ft_strjoin(char const *s1, char const *s2);
char *ft_strtrim(char const *s1, char const *set);
int	is_incset(char ch, char const *set);
char **ft_split(char const *s, char c);
char	*ft_strdup(const char *s);

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
#endif