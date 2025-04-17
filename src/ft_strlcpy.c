#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dsize)
{
	size_t	i;
	size_t	res;
	
	if (!dst && !src)
		return (0);
	i = 0;
	res = ft_strlen(src);
	if (dsize != 0)
	{
		while (src[i] && i < (dsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = 0;
	}
	return (res);
}