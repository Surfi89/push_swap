/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anleclab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 13:11:24 by anleclab          #+#    #+#             */
/*   Updated: 2019/04/04 09:11:43 by anleclab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Writes the string followed by a new line on the standard output.
*/
void	ft_putendl(char const *s)
{
	ft_putstr(s);
	ft_putchar('\n');
}
