/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajordan- <ajordan-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 13:21:05 by ajordan-          #+#    #+#             */
/*   Updated: 2022/02/09 14:51:52 by ajordan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

void	ft_push_swap(char **argv);
int		ft_ps_strlen(char **argv);
void	ft_error(void);
int		ft_ps_atoi(char *str);
void	ft_check_repeat(int *stack_a, int size);
void	ft_sa(int *stack_a);
void	ft_sb(int *stack_b);
void	ft_ss(int *stack_a, int *stack_b);
void	ft_ra(int *stack_a, int size);
void	ft_rb(int *stack_b, int size_b);
void	ft_rr(int *stack_a, int *stack_b, int size_a, int size_b);
void	ft_rra(int *stack_a, int size);
void	ft_rrb(int *stack_b, int size_b);
void	ft_rrr(int *stack_a, int *stack_b, int size_a, int size_b);
void	ft_pb(int *stack_a, int *stack_b, int size_a, int size_b);
void	ft_pa(int *stack_b, int *stack_a, int size_a, int size_b);
int		ft_sort(int *stack_a, int *stack_b, int size);
int		ft_check_sorted(int *stack, int size, int asc_des);
void	ft_sort_three(int *stack, int size);
void	ft_sort_small(int *stack_a, int *stack_b, int size_a);
//void	ft_sort_big(int *stack_a, int *stack_b, int size_a);
int		ft_lowest_num(int *stack, int size);
//int		ft_highest_num(int *stack, int size);
void	ft_move_to_top_a(int *stack_a, int low_pos, int size);
//void	ft_move_to_top_b(int *stack_b, int high_pos, int size_b);
void	ft_index(int *stack_a, int size);
void	ft_sort_tmp(int *tmp_stack, int size);



int		ft_quicksort_a(int *stack_a, int *stack_b, int size_a, int size_b);
int		ft_quicksort_b(int *stack_a, int *stack_b, int size_a, int size_b);
int		ft_sort_small_b(int *stack_a, int *stack_b, int size_a, int size_b);
void	ft_sort_three_b(int *stack, int size);
int		ft_get_mediane(int *pivot, int *stack, int size);

//void	ft_push_to_a(int *stack_a, int *stack_b, int size_a, int size_b)

void	ft_pruebas(int *stack_a, int *stack_b);

#endif
