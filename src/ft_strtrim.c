#include "libft.h"

int	is_incharset(char ch, char const *set)
{
	int i;

	i = 0;	
	while (set[i])
	{
		if (ch == set[i])
			return (1);
		i++;
	}
	return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*dest;

	start = 0;
	while (s1[start] && is_incharset(s1[start], set))
		start++;
	end = ft_strlen(s1) - 1;
	while (end > 0 && is_incharset(s1[end], set))
		end--;
	dest = ft_substr(s1,  start, end - start + 1);
	return (dest);
}