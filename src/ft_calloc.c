#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
	void	*res;
	size_t	mem_size;

	mem_size = nmemb * size;
	if (size && nmemb && (mem_size % size || mem_size % nmemb))
		return (NULL);
	res = malloc(mem_size);
	if (!res)
		return (NULL);
	ft_bzero(res, mem_size);
	return ((void *)res);
}