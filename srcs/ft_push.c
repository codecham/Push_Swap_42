/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcorenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 21:14:14 by dcorenti          #+#    #+#             */
/*   Updated: 2022/03/09 21:14:15 by dcorenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	pa(t_pile *pile)
{
	int	i;

	if (pile->size_b > 0)
	{
		i = pile->size_a;
		while (i > 0)
		{
			pile->a_copy[i] = pile->a_copy[i - 1];
			i--;
		}
		pile->a_copy[i] = pile->b_copy[i];
		pile->size_a++;
		pile->size_b--;
		if (pile->size_b > 0)
		{
			while (i < pile->size_b)
			{
				pile->b_copy[i] = pile->b_copy[i + 1];
				i++;
			}
		}
	}
}

void	pb(t_pile *pile)
{
	int	i;

	if (pile->size_a > 0)
	{
		i = pile->size_b;
		while (i > 0)
		{
			pile->b_copy[i] = pile->b_copy[i - 1];
			i--;
		}
		pile->b_copy[i] = pile->a_copy[i];
		pile->size_b++;
		pile->size_a--;
		if (pile->size_a > 0)
		{
			while (i < pile->size_a)
			{
				pile->a_copy[i] = pile->a_copy[i + 1];
				i++;
			}
		}
	}
}
