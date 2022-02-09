/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_opt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaiel <anaiel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 16:45:50 by anleclab          #+#    #+#             */
/*   Updated: 2019/02/11 15:12:00 by anleclab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "common.h"

static t_opt	parse_opt(char ***av, int *ac, int get_stream, t_file **stream)
{
	int		i;
	t_opt	opt;

	i = 0;
	opt = NONE;
	while ((*av)[0][++i])
	{
		if ((*av)[0][i] == 'v')
			opt = (opt == COLOR) ? COLOR : VISUAL;
		else if ((*av)[0][i] == 'c')
			opt = COLOR;
		else if ((*av)[0][i] == 'i' && get_stream && !*stream
				&& (*ac)-- != 1 && (*stream = ft_fopen((*av)[1])))
			;
		else
			return (ERROR);
	}
	return (opt);
}

t_opt			get_opt(int *ac, char ***av, int get_stream, t_file **stream)
{
	t_opt	opt;
	int		i;
	t_opt	tmp;

	if (get_stream)
		*stream = NULL;
	opt = NONE;
	while (--(*ac) && (++(*av))[0][0] == '-' && (!get_stream || !*stream))
	{
		i = 0;
		if (!(*av)[0][1])
			return (ERROR);
		if ((*av)[0][1] >= '0' && (*av)[0][1] <= '9')
			return (opt);
		tmp = parse_opt(av, ac, get_stream, stream);
		if (tmp != NONE)
			opt = (opt == COLOR && tmp == VISUAL) ? COLOR : tmp;
		if (opt == ERROR)
			return (ERROR);
	}
	if (get_stream && *stream && *ac == 0)
		ft_fclose(stream);
	if (((*av) += (get_stream && *stream) ? 1 : 0) && get_stream && *ac == 0)
		exit(0);
	return (opt);
}
