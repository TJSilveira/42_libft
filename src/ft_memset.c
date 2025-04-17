#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	if (!s)
		return (NULL);
	i = 0;
	while (i < n)
		((unsigned char *)s)[i++] = c;
	return (s);
}
