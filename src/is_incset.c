#include "libft.h"

int	is_incset(char ch, char const *set)
{
	int i;

	i = 0;	
	while (set[i])
	{
		if (ch == set[i])
			return (1);
		i++;
	}
	return (0);
}
