/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbdigits.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anleclab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 08:48:16 by anleclab          #+#    #+#             */
/*   Updated: 2019/04/04 09:09:54 by anleclab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Returns the number of digits in an int.
*/
int		ft_nbdigits(int nb)
{
	int				res;
	unsigned int	unsigned_nb;

	unsigned_nb = (nb < 0) ? -nb : nb;
	res = 1;
	while (unsigned_nb >= 10)
	{
		res++;
		unsigned_nb /= 10;
	}
	return (res);
}
