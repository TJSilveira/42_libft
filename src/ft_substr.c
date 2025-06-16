#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned long	i;
	char			*dest;

	if (start >= ft_strlen(s))
		return (NULL);
	i = 0;
	dest = malloc((len+1)*sizeof(char));
	if (!dest)
		return NULL;
	while (i < (len) && s[i + start])
	{
		dest[i] = s[i + start];
		i++;
	}
	dest[i] = 0;
	return (dest);
}
