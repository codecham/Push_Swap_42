/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcorenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 21:13:32 by dcorenti          #+#    #+#             */
/*   Updated: 2022/03/09 21:13:33 by dcorenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_check_a_is_sort(t_pile *pile)
{
	int	i;

	i = 0;
	while (i < pile->size_a - 1)
	{
		if (pile->a_copy[i] > pile->a_copy[i + 1])
			return (-1);
		i++;
	}
	return (1);
}

int	ft_check_sort(t_pile *pile)
{
	int	i;

	i = 0;
	if (pile->size_b > 0)
		return (-1);
	while (i < pile->size_a - 1)
	{
		if (pile->a_copy[i] > pile->a_copy[i + 1])
			return (-1);
		i++;
	}
	return (1);
}
