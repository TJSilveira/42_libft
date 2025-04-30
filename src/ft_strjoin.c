#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	int		len_s1;
	int		len_s2;
	int		counter;
	char	*dest;

	len_s1 = (int)ft_strlen(s1);
	len_s2 = (int)ft_strlen(s2);
	dest = malloc((len_s1 + len_s2 + 1) * sizeof(char));
	counter = 0;
	if (!dest)
		return NULL;
	while (counter < len_s1)
	{
		dest[counter] = s1[counter];
		counter++;
	}
	counter = 0;
	while (counter < len_s2)
	{
		dest[counter + len_s1] = s2[counter];
		counter++;
	}
	dest[counter + len_s1] = 0;
	return (dest);
}