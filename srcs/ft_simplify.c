/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_simplify.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcorenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 21:14:58 by dcorenti          #+#    #+#             */
/*   Updated: 2022/03/09 21:14:59 by dcorenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_swap(t_pile *pile, int i, int k)
{	
	int	tmp;

	tmp = pile->a_copy[i];
	pile->a_copy[i] = pile->a_copy[k];
	pile->a_copy[k] = tmp;
}

void	ft_sort_min(t_pile *pile, int i, int j, int k)
{
	int	min;

	while (i < pile->size_a)
	{
		k = -1;
		min = pile->a_copy[i];
		while (j < pile->size_a)
		{
			if (pile->a_copy[j] < min)
			{
				min = pile->a_copy[j];
				k = j;
			}
			j++;
		}
		if (k != -1)
			ft_swap(pile, i, k);
		i++;
		j = i;
	}
}

void	ft_change_value(t_pile *pile)
{
	int	i;
	int	j;
	int	*tmp;

	i = 0;
	j = 0;
	tmp = malloc(sizeof(int) * pile->size_a);
	if (!tmp)
		ft_errors(pile);
	while (i < pile->size_a)
	{
		while (j < pile->size_a && pile->a[i] != pile->a_copy[j])
			j++;
		tmp[i] = j;
		j = 0;
		i++;
	}
	i = 0;
	while (i < pile->size_a)
	{
		pile->a_copy[i] = tmp[i];
		i++;
	}
	free(tmp);
}

void	ft_simplify(t_pile *pile)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	ft_sort_min(pile, i, j, k);
	ft_change_value(pile);
}
