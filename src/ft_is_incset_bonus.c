/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_incset_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsilveir <tsilveir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 14:39:51 by tsilveir          #+#    #+#             */
/*   Updated: 2025/06/16 14:39:53 by tsilveir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_incset(char ch, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (ch == set[i])
			return (1);
		i++;
	}
	return (0);
}
