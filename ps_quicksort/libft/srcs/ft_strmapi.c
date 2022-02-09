/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anleclab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 14:03:20 by anleclab          #+#    #+#             */
/*   Updated: 2019/04/04 12:27:56 by anleclab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Returns a new string which is the result of applying the function to the
** given string. The function takes the index of each character as a parameter.
*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*res;

	if (!s || !f || !(res = ft_strdup(s)))
		return (NULL);
	ft_striteri(res, (void *)f);
	return (res);
}
