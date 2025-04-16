#include "libft.h"

char *ft_itoa(int n)
{
	char	temp[12];
	char	final[12];
	int		i;
	int		j;
	
	i = 0;
	j = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	if (n < 0)
		final[j++] = '-';
	n = ABS(n);
	while (n > 0)
	{
		temp[i++] = n % 10 + '0';
		n = n / 10;
	}
	while (--i >= 0)
		final[j++] = temp[i];
	final[j] = 0;
	return (ft_strdup(final));
}
