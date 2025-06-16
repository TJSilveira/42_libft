#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*dest;

	start = 0;
	while (s1[start] && is_incset(s1[start], set))
		start++;
	end = ft_strlen(s1) - 1;
	while (end >= start && is_incset(s1[end], set))
		end--;
	dest = ft_substr(s1,  start, end - start + 1);
	return (dest);
}