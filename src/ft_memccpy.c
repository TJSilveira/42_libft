#include "libft.h"

void *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		if (((unsigned char *)src)[i] == c)
			return (&((unsigned char *)dest)[++i]);
		i++;
	}
	if (i == n && ((unsigned char *)src)[i] != c)
		return (NULL);
	return (&((unsigned char *)dest)[i]);
}
