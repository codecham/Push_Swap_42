/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcorenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 21:14:45 by dcorenti          #+#    #+#             */
/*   Updated: 2022/03/09 21:14:46 by dcorenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rra(t_pile *pile)
{
	int	i;
	int	tmp;

	i = pile->size_a - 1;
	if (pile->size_a > 1)
	{
		tmp = pile->a_copy[i];
		while (i > 0)
		{
			pile->a_copy[i] = pile->a_copy[i - 1];
			i--;
		}
		pile->a_copy[i] = tmp;
	}
}

void	rrb(t_pile *pile)
{
	int	i;
	int	tmp;

	i = pile->size_b - 1;
	if (pile->size_b > 1)
	{
		tmp = pile->b_copy[i];
		while (i > 0)
		{
			pile->b_copy[i] = pile->b_copy[i - 1];
			i--;
		}
		pile->b_copy[i] = tmp;
	}
}

void	rrr(t_pile *pile)
{
	rra(pile);
	rrb(pile);
}
