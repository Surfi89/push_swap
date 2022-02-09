/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ldouble_power.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anleclab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/23 17:16:09 by anleclab          #+#    #+#             */
/*   Updated: 2019/04/04 09:03:37 by anleclab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Returns n to the power of pow where n is a long double and pow a signed int.
*/
long double		ft_ldouble_power(long double n, int pow)
{
	if (pow == 0)
		return (1);
	if (pow > 0)
		return (n * ft_ldouble_power(n, pow - 1));
	if (pow < 0)
		return (n / ft_ldouble_power(n, pow + 1));
	return (0);
}
