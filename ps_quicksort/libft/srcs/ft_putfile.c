/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putfile.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anleclab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 09:19:16 by anleclab          #+#    #+#             */
/*   Updated: 2019/04/04 09:16:02 by anleclab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Write the content of the file on the standard output.
*/
void	ft_putfile(int fd)
{
	char	buf[BUFF_SIZE + 1];
	int		rval;

	rval = read(fd, buf, BUFF_SIZE);
	while (rval > 0)
	{
		buf[rval] = 0;
		ft_putstr(buf);
		rval = read(fd, buf, BUFF_SIZE);
	}
}
