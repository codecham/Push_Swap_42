/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_errors.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcorenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 21:13:39 by dcorenti          #+#    #+#             */
/*   Updated: 2022/03/17 17:28:57 by dcorenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_print_error(void)
{
	ft_putstr_fd("Error\n", 2);
}

void	ft_errors(t_pile *pile)
{
	ft_free(pile);
	ft_print_error();
	exit(0);
}
