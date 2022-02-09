/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anleclab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 16:32:28 by anleclab          #+#    #+#             */
/*   Updated: 2019/02/06 15:38:46 by anleclab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "common.h"
#include <unistd.h>
#include "libft.h"

static void	write_color(char *str)
{
	ft_putstr("\033[0;31m");
	ft_putstr(str);
	ft_putstr("\033[0;m\n");
}

static void	putnbr_color(int nbr)
{
	ft_putstr("\033[0;31m");
	ft_putnbr(nbr);
	ft_putstr("\033[0;m");
}

void		print_instr(char *instr, t_opt opt)
{
	if (opt == NONE)
		return ;
	else if (opt == COLOR)
		write_color(instr);
	else
	{
		ft_putstr(instr);
		ft_putchar('\n');
	}
}

void		print_a(t_piles piles, t_opt opt, int imin, int imax)
{
	int		i;

	if (opt == NONE || opt == INSTR_ONLY)
		return ;
	ft_putstr("a :\t");
	i = 0;
	while (opt == COLOR && imin >= 0 && imax >= imin && i < piles.alen)
	{
		if (i < imin)
			ft_putnbr(piles.a[i++]);
		else if (i >= imin && i <= imax)
			putnbr_color(piles.a[i++]);
		else
			ft_putnbr(piles.a[i++]);
		ft_putchar(' ');
	}
	if (!i)
		while (i < piles.alen)
		{
			ft_putnbr(piles.a[i++]);
			ft_putchar(' ');
		}
	ft_putstr("\n");
}

void		print_b(t_piles piles, t_opt opt, int imin, int imax)
{
	int		i;

	if (opt == NONE || opt == INSTR_ONLY)
		return ;
	ft_putstr("b :\t");
	i = 0;
	while (opt == COLOR && imin >= 0 && imax >= imin && i < piles.blen)
	{
		if (i < imin)
			ft_putnbr(piles.b[i++]);
		else if (i >= imin && i <= imax)
			putnbr_color(piles.b[i++]);
		else
			ft_putnbr(piles.b[i++]);
		ft_putchar(' ');
	}
	if (!i)
		while (i < piles.blen)
		{
			ft_putnbr(piles.b[i++]);
			ft_putchar(' ');
		}
	ft_putstr("\n");
}
