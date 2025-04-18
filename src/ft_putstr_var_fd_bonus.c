#include "libft.h"

void	ft_putstr_var_fd(char *s, int start, int end, int fd)
{	
	while (s[start] && start <= end)
	{
		write(fd, &(s[start]), 1);
		start++;
	}
}
