/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_arg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcorenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 21:13:16 by dcorenti          #+#    #+#             */
/*   Updated: 2022/03/17 17:26:00 by dcorenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_check_int(char *nb, int size)
{
	char	*int_max;
	char	*int_min;
	int		result;

	int_max = ft_itoa(INT_MAX);
	int_min = ft_itoa(INT_MIN);
	if (!int_max || !int_min)
		return (-1);
	if (size == 11)
		result = ft_strncmp(int_min, nb, 11);
	else if (size == 10)
		result = ft_strncmp(int_max, nb, 10);
	else
		result = -1;
	free(int_max);
	free(int_min);
	return (result);
}

int	ft_check_digit(char *str, int i)
{
	if (!str)
		return (-1);
	if (str[i] == '-' || str[i] == '+')
	{
		if (!str[i + 1])
			return (-1);
		i++;
	}
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (-1);
		i++;
	}
	if (i >= 10)
	{
		if (ft_check_int(str, i) < 0)
			return (-1);
	}
	return (1);
}

void	ft_check_double(int size, char **arg)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (i < size - 1)
	{
		while (j < size)
		{
			if (ft_atoi(arg[i]) == ft_atoi(arg[j]))
			{
				ft_free_split(arg, size);
				ft_print_error();
				exit(0);
			}
			j++;
		}
		i++;
		j = i + 1;
	}
}

void	ft_check_arg(int size, char **arg)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (ft_check_digit(arg[i], 0) < 0)
		{
			ft_free_split(arg, size);
			ft_print_error();
			exit(0);
		}
		i++;
	}
	ft_check_double(size, arg);
}	
