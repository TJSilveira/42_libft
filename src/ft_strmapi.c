#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned long	i;
	char			*dest;

	if (!s || !f)
		return NULL;
	dest = ft_strdup(s);
	if (!dest)
		return NULL;
	i = 0;
	while (dest[i])
	{
		dest[i] = f(i,dest[i]);
		i++;
	}
	return (dest);
}
