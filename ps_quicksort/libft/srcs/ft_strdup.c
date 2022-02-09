/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anleclab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 15:47:38 by anleclab          #+#    #+#             */
/*   Updated: 2019/04/04 10:00:52 by anleclab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Returns a new string similas to s1.
*/
char	*ft_strdup(const char *s1)
{
	char	*res;
	int		i;

	if (!s1 || !(res = ft_strnew(ft_strlen(s1))))
		return (NULL);
	i = -1;
	while (s1[++i])
		res[i] = s1[i];
	return (res);
}
