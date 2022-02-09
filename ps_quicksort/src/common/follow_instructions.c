/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   follow_instructions.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anleclab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/03 18:51:44 by anleclab          #+#    #+#             */
/*   Updated: 2019/02/06 21:28:31 by anleclab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "common.h"
#include "libft.h"

static int		leninstr(char *instr)
{
	int		len;

	len = 0;
	while (instr && instr[len] && instr[len] != ' ')
		len++;
	return (len);
}

int				follow_instructions(t_piles *piles, t_fun *fun_list,
		char *instr, t_opt opt)
{
	int		i;
	int		instr_found;

	while (instr[0])
	{
		while (instr[0] == ' ')
			instr++;
		instr_found = 0;
		i = -1;
		while (!instr_found && fun_list[++i].instr)
			if (ft_strnequ(instr, fun_list[i].instr, leninstr(instr)))
			{
				fun_list[i].f(piles, opt);
				instr_found = 1;
			}
		if (!instr_found)
			return (0);
		instr += leninstr(instr);
	}
	return (1);
}
