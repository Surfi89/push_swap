/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anleclab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 16:12:39 by anleclab          #+#    #+#             */
/*   Updated: 2019/04/04 09:49:23 by anleclab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Copies the content of s2 at the end of s1.
*/
char	*ft_strcat(char *s1, const char *s2)
{
	int		i;
	int		len1;

	i = -1;
	len1 = ft_strlen(s1);
	while (s2[++i])
		s1[len1 + i] = s2[i];
	s1[len1 + i] = 0;
	return (s1);
}
