/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anleclab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 16:37:15 by anleclab          #+#    #+#             */
/*   Updated: 2019/04/04 10:09:20 by anleclab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Returns some number or another after having copied the content os src at the
** end of dst or not.
*/
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (dst[i] && i < size)
		i++;
	j = -1;
	while (src[++j] && size && i + j < size - 1)
		dst[i + j] = src[j];
	if (j)
		dst[i + j] = 0;
	while (src[j])
		j++;
	return (i + j);
}
