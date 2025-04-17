#include "libft.h"

int ft_isascii(int c)
{
	if (c >= 1 && c <= 127)
		return (1);
	else
		return (0);
}
