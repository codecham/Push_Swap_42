/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_arg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcorenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 21:15:09 by dcorenti          #+#    #+#             */
/*   Updated: 2022/03/17 17:27:41 by dcorenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_free_s(char **arg, int i)
{
	while (i > 0)
	{
		free(arg[i]);
		i--;
	}
	free(arg);
	ft_print_error();
	exit(0);
}

void	ft_free_s_tmp(char **arg, int i, char **tmp, int j)
{
	while (j > 0)
	{
		free(tmp[j]);
		j--;
	}
	ft_free_s(arg, i);
}

int	ft_count_number(char *str)
{
	int	i;
	int	number;

	i = 0;
	number = 0;
	if (!str)
	{
		ft_print_error();
		exit(0);
	}
	while (str[i])
	{
		if (str[i] == ' ')
			i++;
		else
		{
			number++;
			while (str[i] && str[i] != ' ')
				i++;
		}
	}
	return (number);
}

int	ft_more_number(char *str, char **arg, int i, int j)
{
	char	**tmp;

	if (!str)
		ft_free_s(arg, i);
	if (ft_count_number(str) == 1)
		arg[i] = ft_strdup(str);
	else
	{
		tmp = ft_split(str, ' ');
		if (!tmp)
			ft_free_s(arg, i);
		while (j < ft_count_number(str))
		{
			arg[i + j] = ft_strdup(tmp[j]);
			if (!arg[i + j])
				ft_free_s_tmp(arg, i, tmp, j);
			j++;
		}
		i = i + j -1;
		j++;
		while (j-- > 0)
			free(tmp[j]);
		free (tmp);
	}
	return (i);
}

char	**ft_split_arg(t_pile *pile, char **argv, int i, int j)
{
	char	**arg;

	arg = NULL;
	while (argv[++i])
	{	
		if (ft_count_number(argv[i]) <= 0)
		{
			ft_print_error();
			exit(0);
		}
		pile->size += ft_count_number(argv[i]);
	}
	arg = (char **)malloc(sizeof(char *) * pile->size + 1);
	if (!arg)
		ft_errors(pile);
	i = 1;
	while (argv[i])
	{
		j = ft_more_number(argv[i], arg, j, 0);
		i++;
		j++;
	}
	return (arg);
}
