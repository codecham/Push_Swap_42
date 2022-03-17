/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_struc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcorenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 21:13:45 by dcorenti          #+#    #+#             */
/*   Updated: 2022/03/09 21:13:46 by dcorenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_init_struc(t_pile *pile, char **arg)
{
	int	i;

	i = 0;
	while (i < pile->size)
	{
		pile->a[i] = ft_atoi(arg[i]);
		pile->a_copy[i] = ft_atoi(arg[i]);
		pile->b_copy[i] = 0;
		i++;
	}
	pile->size_a = pile->size;
	pile->size_b = 0;
}
