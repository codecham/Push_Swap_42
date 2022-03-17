/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcorenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 21:13:58 by dcorenti          #+#    #+#             */
/*   Updated: 2022/03/09 21:13:59 by dcorenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_free(t_pile *pile)
{
	if (pile->a)
		free(pile->a);
	if (pile->b)
		free(pile->b);
	if (pile->a)
		free(pile->a_copy);
	if (pile->a)
		free(pile->b_copy);
}

void	ft_malloc(t_pile *pile)
{
	pile->a = malloc(sizeof(int) * pile->size);
	if (!pile->a)
		ft_errors(pile);
	pile->b = malloc(sizeof(int) * pile->size);
	if (!pile->b)
		ft_errors(pile);
	pile->a_copy = malloc(sizeof(int) * pile->size);
	if (!pile->a_copy)
		ft_errors(pile);
	pile->b_copy = malloc(sizeof(int) * pile->size);
	if (!pile->b_copy)
		ft_errors(pile);
}
