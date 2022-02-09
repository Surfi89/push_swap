/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anleclab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 08:48:42 by anleclab          #+#    #+#             */
/*   Updated: 2019/04/04 12:28:58 by anleclab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Returns a new string which corresponds to the given string minus the starting
** and ending whitespaces.
*/
char	*ft_strtrim(char const *s)
{
	int		len;

	if (!s)
		return (NULL);
	while (*s && ft_iswhitespace(*s))
		s++;
	len = ft_strlen(s);
	while (ft_iswhitespace(s[--len]))
		;
	return (ft_strsub(s, 0, ft_strlen(s) - len));
}
