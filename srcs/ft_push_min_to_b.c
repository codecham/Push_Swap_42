/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_min_to_b.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcorenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 21:14:05 by dcorenti          #+#    #+#             */
/*   Updated: 2022/03/09 21:14:06 by dcorenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_push_min_to_top(t_pile *pile, int min)
{
	int	i;

	i = 0;
	while (pile->a_copy[i] != min)
		i++;
	if (i <= (pile->size_a / 2))
	{
		while (pile->a_copy[0] != min)
		{
			ra(pile);
			ft_putstr_fd("ra\n", 1);
		}
	}
	else
	{
		while (pile->a_copy[0] != min)
		{
			rra(pile);
			ft_putstr_fd("rra\n", 1);
		}
	}
}

void	ft_push_min_to_b(t_pile *pile)
{
	int	i;
	int	j;
	int	min;

	i = 0;
	j = 0;
	min = pile->a_copy[i];
	while (i < pile->size_a)
	{
		if (pile->a_copy[i] < min)
		{
			min = pile->a_copy[i];
			j = i;
		}
		i++;
	}
	ft_push_min_to_top(pile, pile->a_copy[j]);
	pb(pile);
	ft_putstr_fd("pb\n", 1);
}
