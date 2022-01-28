/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pruebas.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajordan- <ajordan-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 11:55:19 by ajordan-          #+#    #+#             */
/*   Updated: 2022/01/28 14:31:40 by ajordan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_pruebas(int *stack_a, int *stack_b)
{

// ****** STACKS ANTES DE MOVS ***************

	ft_printf("STACK A    STACK B\n-------    -------\n   %i          %i\n   %i          %i\n   %i          %i\n   %i          %i\n   %i          %i\n   %i          %i\n   %i          %i\n   %i          %i\n", stack_a[0], stack_b[0], stack_a[1], stack_b[1], stack_a[2], stack_b[2], stack_a[3], stack_b[3], stack_a[4], stack_b[4], stack_a[5], stack_b[5], stack_a[6], stack_b[6], stack_a[7], stack_b[7]);

// ********** PRUEBAS MOVIMIENTO PUSH ******************

// *********** PB ****************************
/*
	ft_pb(stack_a, stack_b);
	ft_printf("STACK A    STACK B\n-------    -------\n   %i          %i\n   %i          %i\n   %i          %i\n   %i          %i\n   %i          %i\n   %i          %i\n   %i          %i\n   %i          %i\n", stack_a[0], stack_b[0], stack_a[1], stack_b[1], stack_a[2], stack_b[2], stack_a[3], stack_b[3], stack_a[4], stack_b[4], stack_a[5], stack_b[5], stack_a[6], stack_b[6], stack_a[7], stack_b[7]);

	ft_pb(stack_a, stack_b);
	ft_printf("STACK A    STACK B\n-------    -------\n   %i          %i\n   %i          %i\n   %i          %i\n   %i          %i\n   %i          %i\n   %i          %i\n   %i          %i\n   %i          %i\n", stack_a[0], stack_b[0], stack_a[1], stack_b[1], stack_a[2], stack_b[2], stack_a[3], stack_b[3], stack_a[4], stack_b[4], stack_a[5], stack_b[5], stack_a[6], stack_b[6], stack_a[7], stack_b[7]);

	ft_pb(stack_a, stack_b);
	ft_printf("STACK A    STACK B\n-------    -------\n   %i          %i\n   %i          %i\n   %i          %i\n   %i          %i\n   %i          %i\n   %i          %i\n   %i          %i\n   %i          %i\n", stack_a[0], stack_b[0], stack_a[1], stack_b[1], stack_a[2], stack_b[2], stack_a[3], stack_b[3], stack_a[4], stack_b[4], stack_a[5], stack_b[5], stack_a[6], stack_b[6], stack_a[7], stack_b[7]);

	ft_pb(stack_a, stack_b);
	ft_printf("STACK A    STACK B\n-------    -------\n   %i          %i\n   %i          %i\n   %i          %i\n   %i          %i\n   %i          %i\n   %i          %i\n   %i          %i\n   %i          %i\n", stack_a[0], stack_b[0], stack_a[1], stack_b[1], stack_a[2], stack_b[2], stack_a[3], stack_b[3], stack_a[4], stack_b[4], stack_a[5], stack_b[5], stack_a[6], stack_b[6], stack_a[7], stack_b[7]);
*/
/*	ft_pb(stack_a, stack_b);
	ft_printf("STACK A    STACK B\n-------    -------\n   %i          %i\n   %i          %i\n   %i          %i\n   %i          %i\n   %i          %i\n   %i          %i\n   %i          %i\n   %i          %i\n", stack_a[0], stack_b[0], stack_a[1], stack_b[1], stack_a[2], stack_b[2], stack_a[3], stack_b[3], stack_a[4], stack_b[4], stack_a[5], stack_b[5], stack_a[6], stack_b[6], stack_a[7], stack_b[7]);

	ft_pb(stack_a, stack_b);
	ft_printf("STACK A    STACK B\n-------    -------\n   %i          %i\n   %i          %i\n   %i          %i\n   %i          %i\n   %i          %i\n   %i          %i\n   %i          %i\n   %i          %i\n", stack_a[0], stack_b[0], stack_a[1], stack_b[1], stack_a[2], stack_b[2], stack_a[3], stack_b[3], stack_a[4], stack_b[4], stack_a[5], stack_b[5], stack_a[6], stack_b[6], stack_a[7], stack_b[7]);

	ft_pb(stack_a, stack_b);
	ft_printf("STACK A    STACK B\n-------    -------\n   %i          %i\n   %i          %i\n   %i          %i\n   %i          %i\n   %i          %i\n   %i          %i\n   %i          %i\n   %i          %i\n", stack_a[0], stack_b[0], stack_a[1], stack_b[1], stack_a[2], stack_b[2], stack_a[3], stack_b[3], stack_a[4], stack_b[4], stack_a[5], stack_b[5], stack_a[6], stack_b[6], stack_a[7], stack_b[7]);

//	ft_pb(stack_a, stack_b);
//	ft_printf("STACK A    STACK B\n-------    -------\n   %i          %i\n   %i          %i\n   %i          %i\n   %i          %i\n   %i          %i\n   %i          %i\n   %i          %i\n   %i          %i\n", stack_a[0], stack_b[0], stack_a[1], stack_b[1], stack_a[2], stack_b[2], stack_a[3], stack_b[3], stack_a[4], stack_b[4], stack_a[5], stack_b[5], stack_a[6], stack_b[6], stack_a[7], stack_b[7]);
*/


// ************ PA *************************
/*
	ft_pa(stack_b, stack_a);
	ft_printf("STACK A    STACK B\n-------    -------\n   %i          %i\n   %i          %i\n   %i          %i\n   %i          %i\n   %i          %i\n   %i          %i\n   %i          %i\n   %i          %i\n", stack_a[0], stack_b[0], stack_a[1], stack_b[1], stack_a[2], stack_b[2], stack_a[3], stack_b[3], stack_a[4], stack_b[4], stack_a[5], stack_b[5], stack_a[6], stack_b[6], stack_a[7], stack_b[7]);

	ft_pa(stack_b, stack_a);
	ft_printf("STACK A    STACK B\n-------    -------\n   %i          %i\n   %i          %i\n   %i          %i\n   %i          %i\n   %i          %i\n   %i          %i\n   %i          %i\n   %i          %i\n", stack_a[0], stack_b[0], stack_a[1], stack_b[1], stack_a[2], stack_b[2], stack_a[3], stack_b[3], stack_a[4], stack_b[4], stack_a[5], stack_b[5], stack_a[6], stack_b[6], stack_a[7], stack_b[7]);

	ft_pa(stack_b, stack_a);
	ft_printf("STACK A    STACK B\n-------    -------\n   %i          %i\n   %i          %i\n   %i          %i\n   %i          %i\n   %i          %i\n   %i          %i\n   %i          %i\n   %i          %i\n", stack_a[0], stack_b[0], stack_a[1], stack_b[1], stack_a[2], stack_b[2], stack_a[3], stack_b[3], stack_a[4], stack_b[4], stack_a[5], stack_b[5], stack_a[6], stack_b[6], stack_a[7], stack_b[7]);

	ft_pa(stack_b, stack_a);
	ft_printf("STACK A    STACK B\n-------    -------\n   %i          %i\n   %i          %i\n   %i          %i\n   %i          %i\n   %i          %i\n   %i          %i\n   %i          %i\n   %i          %i\n", stack_a[0], stack_b[0], stack_a[1], stack_b[1], stack_a[2], stack_b[2], stack_a[3], stack_b[3], stack_a[4], stack_b[4], stack_a[5], stack_b[5], stack_a[6], stack_b[6], stack_a[7], stack_b[7]);

	ft_pa(stack_b, stack_a);
	ft_printf("STACK A    STACK B\n-------    -------\n   %i          %i\n   %i          %i\n   %i          %i\n   %i          %i\n   %i          %i\n   %i          %i\n   %i          %i\n   %i          %i\n", stack_a[0], stack_b[0], stack_a[1], stack_b[1], stack_a[2], stack_b[2], stack_a[3], stack_b[3], stack_a[4], stack_b[4], stack_a[5], stack_b[5], stack_a[6], stack_b[6], stack_a[7], stack_b[7]);

	ft_pa(stack_b, stack_a);
	ft_printf("STACK A    STACK B\n-------    -------\n   %i          %i\n   %i          %i\n   %i          %i\n   %i          %i\n   %i          %i\n   %i          %i\n   %i          %i\n   %i          %i\n", stack_a[0], stack_b[0], stack_a[1], stack_b[1], stack_a[2], stack_b[2], stack_a[3], stack_b[3], stack_a[4], stack_b[4], stack_a[5], stack_b[5], stack_a[6], stack_b[6], stack_a[7], stack_b[7]);
:%s/ft_sa/ft_ft_sa/g
	ft_pa(stack_b, stack_a);
	ft_printf("STACK A    STACK B\n-------    -------\n   %i          %i\n   %i          %i\n   %i          %i\n   %i          %i\n   %i          %i\n   %i          %i\n   %i          %i\n   %i          %i\n", stack_a[0], stack_b[0], stack_a[1], stack_b[1], stack_a[2], stack_b[2], stack_a[3], stack_b[3], stack_a[4], stack_b[4], stack_a[5], stack_b[5], stack_a[6], stack_b[6], stack_a[7], stack_b[7]);

	ft_pa(stack_b, stack_a);
	ft_printf("STACK A    STACK B\n-------    -------\n   %i          %i\n   %i          %i\n   %i          %i\n   %i          %i\n   %i          %i\n   %i          %i\n   %i          %i\n   %i          %i\n", stack_a[0], stack_b[0], stack_a[1], stack_b[1], stack_a[2], stack_b[2], stack_a[3], stack_b[3], stack_a[4], stack_b[4], stack_a[5], stack_b[5], stack_a[6], stack_b[6], stack_a[7], stack_b[7]);

//	ft_pa(stack_b, stack_a);
//	ft_printf("STACK A    STACK B\n-------    -------\n   %i          %i\n   %i          %i\n   %i          %i\n   %i          %i\n   %i          %i\n   %i          %i\n   %i          %i\n   %i          %i\n", stack_a[0], stack_b[0], stack_a[1], stack_b[1], stack_a[2], stack_b[2], stack_a[3], stack_b[3], stack_a[4], stack_b[4], stack_a[5], stack_b[5], stack_a[6], stack_b[6], stack_a[7], stack_b[7]);
*/

// ********** FIN PRUEBAS PUSH ***********************


// ****************** PRUEBAS MOVIMIENTOS ***************


// *********  MOVIMIENTO SA SB SS ***********
//	ft_sa(stack_a);
//	ft_sb(stack_b);
//	ft_ss(stack_a, stack_b);
//	ft_printf("STACK A    STACK B\n-------    -------\n   %i          %i\n   %i          %i\n   %i          %i\n   %i          %i\n   %i          %i\n   %i          %i\n   %i          %i\n   %i          %i\n", stack_a[0], stack_b[0], stack_a[1], stack_b[1], stack_a[2], stack_b[2], stack_a[3], stack_b[3], stack_a[4], stack_b[4], stack_a[5], stack_b[5], stack_a[6], stack_b[6], stack_a[7], stack_b[7]);


// **********  MOVIMIENTO RA RB RR ****************
//	ft_ra(stack_a);
//	ft_rb(stack_b);
//	ft_rr(stack_a, stack_b);
//	ft_printf("STACK A    STACK B\n-------    -------\n   %i          %i\n   %i          %i\n   %i          %i\n   %i          %i\n   %i          %i\n   %i          %i\n   %i          %i\n   %i          %i\n", stack_a[0], stack_b[0], stack_a[1], stack_b[1], stack_a[2], stack_b[2], stack_a[3], stack_b[3], stack_a[4], stack_b[4], stack_a[5], stack_b[5], stack_a[6], stack_b[6], stack_a[7], stack_b[7]);

// ********** MOVIMIENTO RRA RRB RRR **************
//	ft_rra(stack_a);
//	ft_rrb(stack_b);
//	ft_rrr(stack_a, stack_b);
//	ft_printf("STACK A    STACK B\n-------    -------\n   %i          %i\n   %i          %i\n   %i          %i\n   %i          %i\n   %i          %i\n   %i          %i\n   %i          %i\n   %i          %i\n", stack_a[0], stack_b[0], stack_a[1], stack_b[1], stack_a[2], stack_b[2], stack_a[3], stack_b[3], stack_a[4], stack_b[4], stack_a[5], stack_b[5], stack_a[6], stack_b[6], stack_a[7], stack_b[7]);

// ******************* FIN PRUEBAS MOVIMIENTOS **************
}


//	ft_printf("STACK A    STACK B\n-------    -------\n   %i          %i\n   %i          %i\n   %i          %i\n   %i          %i\n", stack_a[0], stack_b[0], stack_a[1], stack_b[1], stack_a[2], stack_b[2], stack_a[3], stack_b[3]);



//	ft_printf("STACK A    STACK B\n-------    -------\n   %i          %i\n   %i          %i\n   %i          %i\n   %i          %i\n   %i          %i\n   %i          %i\n   %i          %i\n   %i          %i\n", stack_a[0], stack_b[0], stack_a[1], stack_b[1], stack_a[2], stack_b[2], stack_a[3], stack_b[3], stack_a[4], stack_b[4], stack_a[5], stack_b[5], stack_a[6], stack_b[6], stack_a[7], stack_b[7]);
