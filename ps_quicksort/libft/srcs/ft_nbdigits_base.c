/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbdigits_base.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anleclab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 08:58:03 by anleclab          #+#    #+#             */
/*   Updated: 2019/04/04 09:00:29 by anleclab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Returns the number of digits in an int.
*/
int		ft_nbdigits_base(unsigned int nb, int base)
{
	int				res;

	if (base < 2)
		return (-1);
	if (nb == 0)
		return (1);
	res = 0;
	while (nb)
	{
		res++;
		nb /= base;
	}
	return (res);
}
