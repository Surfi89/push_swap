/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions3.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anleclab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/04 13:41:47 by anleclab          #+#    #+#             */
/*   Updated: 2019/01/23 17:31:52 by anleclab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "common.h"

void	rrr(t_piles *piles, t_opt opt)
{
	print_instr("rrr", opt);
	rra(piles, NONE);
	rrb(piles, NONE);
	if (piles->alen > 1)
		print_a(*piles, opt, 0, 0);
	else
		print_a(*piles, opt, -1, -1);
	if (piles->blen > 1)
		print_b(*piles, opt, 0, 0);
	else
		print_b(*piles, opt, -1, -1);
}
