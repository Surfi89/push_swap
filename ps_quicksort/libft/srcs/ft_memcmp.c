/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anleclab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 19:29:30 by anleclab          #+#    #+#             */
/*   Updated: 2019/04/04 12:24:47 by anleclab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Returns true if the value of n bits of s1 and s2 are equal, false otherwise.
*/
int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int		is_different;
	size_t	i;

	is_different = 0;
	i = -1;
	while (!is_different && ++i < n)
		is_different = ((unsigned char *)s1)[i] - ((unsigned char *)s2)[i];
	return (is_different);
}
