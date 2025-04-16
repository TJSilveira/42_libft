#include "libft.h"

static int	is_cset(char s, char c)
{
	if (s == c)
		return (1);
	else
		return (0);
}

static int	counter_word(char const *s, char c)
{
	int	counter;
	int	i;

	counter = 0;
	i = 0;
	while (s[i])
	{
		if (is_cset(s[i],c) == 0 && (i == 0 || is_cset(s[i - 1], c)))
		{
			counter++;
		}
		i++;
	}
	return (counter);
}

char **ft_split(char const *s, char c)
{
	size_t	i;
	int		n_words;
	int		index;
	int		start;
	char	**dest;

	i = 0;
	index = 0;
	n_words = counter_word(s, c);
	dest = malloc(sizeof(char *) * (n_words + 1));
	if (!dest)
		return (NULL);
	while (index < n_words)
	{
		while (is_cset(s[i], c) == 1)
			i++;
		start = i;
		while (is_cset(s[i], c) == 0)
			i++;
		dest[index] = ft_substr(s, start, i - start);
		index++;
	}
	dest[index] = NULL;
	return (dest);
}