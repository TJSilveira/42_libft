#include "libft.h"
#include <stddef.h>
#include <stdlib.h>

size_t ft_strlen(const char *s)
{
	unsigned long	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}