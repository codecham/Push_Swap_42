/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_small_stack.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcorenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 21:15:03 by dcorenti          #+#    #+#             */
/*   Updated: 2022/03/09 21:15:05 by dcorenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_sort_3_numbers(t_pile *pile)
{
	while (ft_check_a_is_sort(pile) == -1)
	{
		if (pile->a_copy[0] > pile->a_copy[1])
		{
			sa(pile);
			ft_printf("sa\n");
		}
		else
		{
			rra(pile);
			ft_printf("rra\n");
		}
	}
}

void	ft_sort_small_stack(t_pile *pile)
{
	int	need_pa;

	need_pa = 0;
	if (pile->size == 5)
	{
		ft_push_min_to_b(pile);
		ft_push_min_to_b(pile);
		need_pa = 2;
	}
	if (pile->size == 4)
	{
		ft_push_min_to_b(pile);
		need_pa = 1;
	}
	ft_sort_3_numbers(pile);
	if (need_pa > 0)
	{
		pa(pile);
		ft_printf("pa\n");
		if (need_pa == 2)
		{
			pa(pile);
			ft_printf("pa\n");
		}
	}
}
