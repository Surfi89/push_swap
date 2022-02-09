/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anleclab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 13:55:27 by anleclab          #+#    #+#             */
/*   Updated: 2019/04/04 12:27:07 by anleclab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Returns a new string which is the result of applying the function to the
** given string.
*/
char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*res;

	if (!s || !f || !(res = ft_strdup(s)))
		return (NULL);
	ft_striter(res, (void *)f);
	return (res);
}
