/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anleclab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 14:22:39 by anleclab          #+#    #+#             */
/*   Updated: 2019/04/04 08:57:10 by anleclab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Returns the string of digits representing the given int.
*/
char		*ft_itoa(int n)
{
	char	*res;
	int		len;

	if (n == INT_MIN)
	{
		res = ft_strdup("-2147483648");
		return (res);
	}
	len = (n < 0 ? ft_nbdigits(n) + 1 : ft_nbdigits(n));
	n = (n < 0 ? -n : n);
	if (!(res = ft_strnew(len)))
		return (NULL);
	res[0] = (n == 0 ? '0' : '-');
	while (n)
	{
		res[--len] = '0' + n % 10;
		n /= 10;
	}
	return (res);
}
