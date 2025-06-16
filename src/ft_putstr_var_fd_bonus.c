/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_var_fd_bonus.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsilveir <tsilveir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 14:43:42 by tsilveir          #+#    #+#             */
/*   Updated: 2025/06/16 14:43:43 by tsilveir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_var_fd(char *s, int start, int end, int fd)
{
	while (s[start] && start <= end)
	{
		write(fd, &(s[start]), 1);
		start++;
	}
}
