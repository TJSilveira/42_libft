#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	if (!s)
		return NULL;
	if (c == 0)
		return ((char *)&(s[ft_strlen(s)]));
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return ((char *)&(s[i]));
		i++;
	}
	return (NULL);
}