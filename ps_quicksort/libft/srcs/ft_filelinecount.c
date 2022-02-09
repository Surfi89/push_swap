/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_filelinecount.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anleclab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 09:18:47 by anleclab          #+#    #+#             */
/*   Updated: 2019/04/04 08:54:47 by anleclab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Returns the number of line of the file.
*/
int		ft_filelinecount(int fd)
{
	int		nblines;
	int		rval;
	char	buf[BUFF_SIZE + 1];
	int		i;

	if ((rval = read(fd, buf, BUFF_SIZE)) <= 0)
		return (0);
	buf[rval] = 0;
	nblines = 1;
	while (rval > 0)
	{
		i = -1;
		while (buf[++i])
			nblines += (buf[i] == '\n');
		rval = read(fd, buf, BUFF_SIZE);
	}
	return (nblines);
}
