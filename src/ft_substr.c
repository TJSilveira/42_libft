/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsilveir <tsilveir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 14:45:26 by tsilveir          #+#    #+#             */
/*   Updated: 2025/06/16 14:45:27 by tsilveir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned long	i;
	char			*dest;

	if (start >= ft_strlen(s))
	{
		dest = malloc((1) * sizeof(char));
		if (!dest)
			return (NULL);
		dest[0] = '\0';
		return (dest);
	}
	i = 0;
	dest = malloc((len + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	while (i < (len) && s[i + start])
	{
		dest[i] = s[i + start];
		i++;
	}
	dest[i] = 0;
	return (dest);
}
