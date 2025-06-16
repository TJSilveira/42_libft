#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		len;
	int		i;
	char	*dest;

	len = (int)ft_strlen(s);
	dest = malloc((len + 1) * sizeof(char));
	i = 0;
	if (!dest)
		return NULL;
	while (i < len)
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}