/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_double_power.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anleclab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/12 14:54:14 by anleclab          #+#    #+#             */
/*   Updated: 2019/04/04 08:54:32 by anleclab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Returns n to the power of pow where n is a double and pow a signed int.
*/
double		ft_double_power(double n, int pow)
{
	if (pow == 0)
		return (1);
	if (pow > 0)
		return (n * ft_double_power(n, pow - 1));
	if (pow < 0)
		return (n / ft_double_power(n, pow + 1));
	return (0);
}
