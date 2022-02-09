/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anleclab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 19:00:11 by anleclab          #+#    #+#             */
/*   Updated: 2019/04/04 09:08:09 by anleclab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Copies len bits of src to dst. Protected against overlapping.
*/
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int		i;
	char	*d;
	char	*s;

	i = -1;
	d = (char *)dst;
	s = (char *)src;
	if (dst < src)
	{
		while (++i < (int)len)
			*(d++) = *(s++);
	}
	else
	{
		d += len - 1;
		s += len - 1;
		while (++i < (int)len)
			*(d--) = *(s--);
	}
	return (dst);
}
