#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		len;
	int		counter;
	char	*dest;

	len = (int)ft_strlen(s);
	dest = malloc((len + 1) * sizeof(char));
	counter = 0;
	if (!dest)
		return NULL;
	while (counter < len)
	{
		dest[counter] = s[counter];
		counter++;
	}
	dest[counter] = 0;
	return (dest);
}