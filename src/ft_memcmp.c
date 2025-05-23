#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n && ((unsigned char *)s1)[i] == ((unsigned char *)s2)[i])
		i++;
	if ((((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]) > 0)
		return (1);
	else if ((((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]) == 0)
		return (0);
	else
		return (-1);
}
