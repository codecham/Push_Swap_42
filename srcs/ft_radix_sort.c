/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_radix_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcorenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 21:14:34 by dcorenti          #+#    #+#             */
/*   Updated: 2022/03/09 21:14:35 by dcorenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_sort_by_bits(t_pile *pile, int i)
{
	int	j;
	int	nb;

	j = 0;
	nb = 0;
	while (j < pile->size)
	{
		nb = pile->a_copy[0];
		if (((nb >> i) & 1) == 1)
		{
			ft_printf("ra\n");
			ra(pile);
		}
		else
		{
			ft_printf("pb\n");
			pb(pile);
		}
		j++;
	}
	while (pile->size_b != 0)
	{
		ft_printf("pa\n");
		pa(pile);
	}
}

void	ft_radix_sort(t_pile *pile)
{
	int	i;
	int	max_num;
	int	max_bits;

	i = 0;
	max_num = pile->size_a - 1;
	max_bits = 0;
	while (max_num >> max_bits != 0)
		max_bits++;
	while (i < max_bits && ft_check_sort(pile) == -1)
	{
		ft_sort_by_bits(pile, i);
		i++;
	}
}
