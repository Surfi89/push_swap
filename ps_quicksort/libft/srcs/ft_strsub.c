/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anleclab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 17:46:36 by anleclab          #+#    #+#             */
/*   Updated: 2019/04/04 12:07:40 by anleclab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Returns a new string which contains len characters from the original string
** starting from index start.
*/
char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*res;

	if (!(res = ft_strnew(len)))
		return (NULL);
	s += start;
	ft_strncpy(res, s, len);
	return (res);
}
