#ifndef FT_SPLIT_H
#define FT_SPLIT_H

typedef struct s_split
{
	int		i;
	int		n_words;
	int		index;
	int		start;
	char	**dest;
}	t_split;

#endif