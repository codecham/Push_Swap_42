/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcorenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 21:14:52 by dcorenti          #+#    #+#             */
/*   Updated: 2022/03/09 21:14:53 by dcorenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ra(t_pile *pile)
{
	int	i;
	int	tmp;

	i = 0;
	if (pile->size_a > 1)
	{
		tmp = pile->a_copy[i];
		while (i < pile->size_a)
		{
			pile->a_copy[i] = pile->a_copy[i + 1];
			i++;
		}
		pile->a_copy[i - 1] = tmp;
	}
}

void	rb(t_pile *pile)
{
	int	i;
	int	tmp;

	i = 0;
	if (pile->size_b > 1)
	{
		tmp = pile->b_copy[i];
		while (i < pile->size_b)
		{
			pile->b_copy[i] = pile->b_copy[i + 1];
			i++;
		}
		pile->b_copy[i - 1] = tmp;
	}
}

void	rr(t_pile *pile)
{
	ra(pile);
	rb(pile);
}
