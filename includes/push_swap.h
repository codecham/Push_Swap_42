/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcorenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 21:19:43 by dcorenti          #+#    #+#             */
/*   Updated: 2022/03/17 17:31:39 by dcorenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"

typedef struct s_pile
{
	int	*a;
	int	*b;
	int	*a_copy;
	int	*b_copy;
	int	size;
	int	size_a;
	int	size_b;

}					t_pile;

void	ft_check_arg(int size, char **arg);
void	ft_errors(t_pile *pile);
void	ft_malloc(t_pile *pile);
void	ft_init_struc(t_pile *pile, char **arg);
void	sa(t_pile *pile);
void	sb(t_pile *pile);
void	ss(t_pile *pile);
void	pa(t_pile *pile);
void	pb(t_pile *pile);
void	ra(t_pile *pile);
void	rb(t_pile *pile);
void	rr(t_pile *pile);
void	rra(t_pile *pile);
void	rrb(t_pile *pile);
void	rrr(t_pile *pile);
void	ft_simplify(t_pile *pile);
void	ft_radix_sort(t_pile *pile);
void	ft_free(t_pile *pile);
void	ft_sort_small_stack(t_pile *pile);
void	ft_push_min_to_b(t_pile *pile);
void	ft_free_split(char **arg, int size);
int		ft_check_sort(t_pile *pile);
int		ft_check_a_is_sort(t_pile *pile);
char	**ft_split_arg(t_pile *pile, char **argv, int i, int j);
void	ft_print_error(void);

#endif