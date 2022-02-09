/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_checker.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anleclab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/03 18:02:45 by anleclab          #+#    #+#             */
/*   Updated: 2019/02/11 14:58:09 by anleclab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"
#include "libft.h"

static void		error(void)
{
	ft_putstr("Error\n");
	exit(0);
}

static void		end(t_piles piles, t_fun *fun_list, t_file *stream, char *instr)
{
	free(piles.a);
	free(piles.b);
	free(instr);
	delete_funlist(fun_list);
	ft_fclose(&stream);
}

static void		initialize(t_file **stream, t_fun **fun_list,
		char **instr, t_piles *piles)
{
	if (!*stream)
		*stream = ft_fopen("");
	*fun_list = initialize_fun_list();
	*instr = (char *)malloc(sizeof(char) * 4);
	if (!*stream || !*fun_list || !*instr)
	{
		end(*piles, *fun_list, *stream, *instr);
		error();
	}
}

static t_piles	init_piles(int ac, char **av, t_opt opt)
{
	t_piles	piles;

	if (!(piles.a = get_pile(av, &ac)))
		error();
	if (!(piles.b = (int *)malloc(sizeof(int) * ac)))
	{
		free(piles.a);
		error();
	}
	piles.alen = ac;
	piles.blen = 0;
	print_a(piles, opt, -1, -1);
	print_b(piles, opt, -1, -1);
	return (piles);
}

int				main(int ac, char **av)
{
	t_piles piles;
	char	*instr;
	t_opt	opt;
	t_fun	*fun_list;
	t_file	*stream;

	if ((opt = get_opt(&ac, &av, 1, &stream)) == ERROR)
		if (!stream || ft_fclose(&stream))
			usage();
	piles = init_piles(ac, av, opt);
	initialize(&stream, &fun_list, &instr, &piles);
	get_instr(&instr, stream);
	while (*instr)
	{
		if (!instr_check(instr, fun_list)
				|| !follow_instructions(&piles, fun_list, instr, opt))
		{
			end(piles, fun_list, stream, instr);
			error();
		}
		get_instr(&instr, stream);
	}
	checker(piles);
	end(piles, fun_list, stream, instr);
	return (0);
}
