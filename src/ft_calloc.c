#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
	void	*res;
	size_t	mem_size;

	if (size == 0 || nmemb == 0)
		return (malloc(1));
	mem_size = nmemb * size;
	if (mem_size / size != nmemb)
		return (NULL);
	res = malloc(mem_size);
	if (!res)
		return (NULL);
	ft_bzero(res, mem_size);
	return ((void *)res);
}