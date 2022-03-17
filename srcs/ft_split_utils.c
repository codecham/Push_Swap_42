/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcorenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 21:15:15 by dcorenti          #+#    #+#             */
/*   Updated: 2022/03/09 21:15:16 by dcorenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_free_split(char **arg, int size)
{
	int	i;

	i = 0;
	if (arg)
	{
		while (i < size)
		{
			if (arg[i])
				free(arg[i]);
			i++;
		}
		free(arg);
	}
}
