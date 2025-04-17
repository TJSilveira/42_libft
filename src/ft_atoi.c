#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	total;
	int	i;
	int	sign;
	
	total = 0;
	i = 0;
	sign = 1;
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-')
	{
		sign *= -1;
		i++;
	}
	else if(nptr[i] == '+')
		i++;
	while (nptr[i] >= '0' && nptr[i] <= '9')
		total = total * 10 + nptr[i++] - '0';
	return (total * sign);
}
