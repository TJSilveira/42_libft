#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	if (c == 0)
		return ((char *)&(s[ft_strlen(s)]));
	i = ft_strlen(s)-1;
	while (i >= 0)
	{
		if (s[i] == (unsigned char)c)
			return ((char *)&(s[i]));
		i--;
	}
	return (NULL);
}