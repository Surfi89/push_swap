/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printbits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anleclab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/19 16:10:12 by anleclab          #+#    #+#             */
/*   Updated: 2019/04/04 12:36:10 by anleclab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Writes the bits of c.
*/
void	ft_printbits(char c)
{
	unsigned char	bit;

	bit = 1 << 7;
	while (bit)
	{
		if (bit & c)
			ft_putchar('1');
		else
			ft_putchar('0');
		bit = bit >> 1;
	}
}
