/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcorenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 21:15:27 by dcorenti          #+#    #+#             */
/*   Updated: 2022/03/17 17:28:00 by dcorenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	init(t_pile *pile)
{
	pile->size = 0;
	pile->size_a = 0;
	pile->size_b = 0;
}

void	ext(t_pile *pile)
{
	if (pile->size <= 1 || ft_check_sort(pile) == 1)
		ft_free(pile);
	else
	{
		ft_simplify(pile);
		if (pile->size > 5)
			ft_radix_sort(pile);
		else
			ft_sort_small_stack(pile);
		ft_free(pile);
	}
}

int	main(int argc, char **argv)
{
	t_pile	pile;
	char	**arg;

	arg = NULL;
	init(&pile);
	if (argc <= 1)
		exit(0);
	else
		arg = ft_split_arg(&pile, argv, 0, 0);
	if (!arg)
	{
		ft_print_error();
		exit(0);
	}
	ft_check_arg(pile.size, arg);
	ft_malloc(&pile);
	ft_init_struc(&pile, arg);
	ft_free_split(arg, pile.size);
	ext(&pile);
}
