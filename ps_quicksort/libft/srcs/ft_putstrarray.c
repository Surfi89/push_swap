/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrarray.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anleclab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 09:20:49 by anleclab          #+#    #+#             */
/*   Updated: 2019/04/04 09:30:13 by anleclab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Writes a NULL terminated array of string on the stardard output. Each string
** is separated by a newline.
*/
void	ft_putstrarray(const char **str)
{
	if (!str)
		return ;
	while (*str)
	{
		ft_putendl(*str);
		str++;
	}
}
