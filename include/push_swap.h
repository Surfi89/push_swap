/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajordan- <ajordan-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 13:21:05 by ajordan-          #+#    #+#             */
/*   Updated: 2022/01/28 14:30:54 by ajordan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/include/libft.h"
# include "../libft/include/ft_printf.h"

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

# include <string.h> 

void	ft_push_swap(char **argv);
int		ft_ps_strlen(char **argv);
void	ft_error(void);
int		ft_stack_len(int *stack);
int		ft_ps_atoi(char *str);
void	ft_check_repeat(int *stack_a);
void	ft_sa(int *stack_a);
void	ft_sb(int *stack_b);
void	ft_ss(int *stack_a, int *stack_b);
void	ft_ra(int *stack_a);
void	ft_rb(int *stack_b);
void	ft_rr(int *stack_a, int *stack_b);
void	ft_rra(int *stack_a);
void	ft_rrb(int *stack_b);
void	ft_rrr(int *stack_a, int *stack_b);
void	ft_pb(int *stack_a, int *stack_b);
void	ft_pa(int *stack_b, int *stack_a);
int		ft_sort(int *stack_a, int size);
int		ft_check_sorted(int *stack, int size);
void	ft_sort_3(int *a);





void	ft_pruebas(int *stack_a, int *stack_b);

#endif
