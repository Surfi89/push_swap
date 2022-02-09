/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instr_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anleclab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 11:43:32 by anleclab          #+#    #+#             */
/*   Updated: 2019/02/06 21:23:37 by anleclab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"
#include "libft.h"

#include <stdio.h>

int		instr_check(char *instr, t_fun *fun_list)
{
	int		i;

	i = -1;
	while (fun_list[++i].instr)
		if (ft_strequ(fun_list[i].instr, instr))
			return (1);
	return (0);
}

void	get_instr(char **instr, t_file *stream)
{
	int		i;

	i = -1;
	while (++i < 4)
		if (((*instr)[i] = ft_fgetc(stream)) == -1 || (*instr)[i] == '\n'
				|| (*instr)[i] == 0)
		{
			if (i == 0 && (*instr)[i] == '\n')
			{
				(*instr)[0] = 'e';
				(*instr)[1] = 0;
			}
			else
				(*instr)[i] = 0;
			return ;
		}
	(*instr)[0] = 'e';
	(*instr)[1] = 0;
}
