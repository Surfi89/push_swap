/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaiel <anaiel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/05 17:38:50 by anleclab          #+#    #+#             */
/*   Updated: 2019/02/06 21:33:10 by anleclab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void		error(void)
{
	ft_putstr("Error\n");
	exit(0);
}

static void		usage(void)
{
	ft_putstr("usage: ./push_swap [-vc] int_list\n");
	exit(0);
}

static void		delete_piles(t_piles piles)
{
	free(piles.a);
	free(piles.b);
}

static t_piles	init_piles(int ac, char **av)
{
	t_piles	piles;

	piles.alen = ac;
	if (!(piles.a = get_pile(av, &piles.alen)))
		error();
	piles.blen = 0;
	if (!(piles.b = (int *)malloc(sizeof(int) * piles.alen)))
	{
		free(piles.a);
		error();
	}
	return (piles);
}

int				main(int ac, char **av)
{
	t_piles	piles;
	t_opt	opt;
	t_fun	*fun_list;

	if ((opt = get_opt(&ac, &av, 0, NULL)) == NONE)
		opt = INSTR_ONLY;
	if (opt == ERROR || ac == 0)
		usage();
	piles = init_piles(ac, av);
	fun_list = initialize_fun_list();
	if (!fun_list || !quick_sort_a(&piles, fun_list, piles.alen, opt))
	{
		delete_funlist(fun_list);
		delete_piles(piles);
		error();
	}
	delete_funlist(fun_list);
	delete_piles(piles);
	return (0);
}
