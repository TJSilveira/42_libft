#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dsize)
{
	size_t	i;
	size_t	d;

	d = ft_strlen(dst);
	if (dsize <= d)
		return (dsize + ft_strlen(src));
	i = 0;
	while (src[i] && dsize - d - 1 > 0)
	{
		dst[d] = src[i];
		d++;
		i++;
	}
	dst[d] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[i]));
}