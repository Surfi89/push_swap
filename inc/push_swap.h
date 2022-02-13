/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajordan- <ajordan-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 13:21:05 by ajordan-          #+#    #+#             */
/*   Updated: 2022/02/12 18:35:32 by ajordan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef struct	s_stacks
{
	int	*a;
	int	*b;
	int	size_a;
	int	size_b;
}	t_stacks;

# define ASCENDING 0
# define DESCENDING 1

void	ft_push_swap(char **argv);
int		ft_ps_strlen(char **argv);
void	ft_error(void);
int		ft_ps_atoi(char *str);
void	ft_check_repeat(t_stacks *stack, int size);
void	ft_sa(t_stacks *stack);
void	ft_sb(t_stacks *stack);
void	ft_ss(t_stacks *stack);
void	ft_ra(t_stacks *stack);
void	ft_rb(t_stacks *stack);
void	ft_rr(t_stacks *stack);
void	ft_rra(t_stacks *stack);
void	ft_rrb(t_stacks *stack);
void	ft_rrr(t_stacks *stack);
void	ft_pb(t_stacks *stack);
void	ft_pa(t_stacks *stack);
int		ft_sort(t_stacks *stack, int size);
int		ft_check_sorted(int *pile, int size, int order);
void	ft_sort_three_a(t_stacks *s);
void	ft_sort_tmp(int *tmp_stack, int size);
int		ft_quicksort_a(t_stacks *stack, int len);
int		ft_quicksort_b(t_stacks *stack, int len);
void		ft_quicksort_3(t_stacks *stack, int len);
int		ft_sort_small_b(t_stacks *stack, int len);
int		ft_get_mediane(int *pivot, int *stack, int size);

#endif
