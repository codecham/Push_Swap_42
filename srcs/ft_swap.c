/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcorenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 21:15:20 by dcorenti          #+#    #+#             */
/*   Updated: 2022/03/09 21:15:21 by dcorenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sa(t_pile *pile)
{
	int	tmp;

	if (pile->size_a >= 2)
	{
		tmp = pile->a_copy[0];
		pile->a_copy[0] = pile->a_copy[1];
		pile->a_copy[1] = tmp;
	}
}

void	sb(t_pile *pile)
{
	int	tmp;

	if (pile->size_b >= 2)
	{
		tmp = pile->b_copy[0];
		pile->b_copy[0] = pile->b_copy[1];
		pile->b_copy[1] = tmp;
	}
}

void	ss(t_pile *pile)
{
	sa(pile);
	sb(pile);
}
