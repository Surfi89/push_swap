/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anleclab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 17:29:02 by anleclab          #+#    #+#             */
/*   Updated: 2019/04/04 10:21:36 by anleclab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Returns a pointer to the first occurence of the needle in the haystack, or
** NULL if the needle does not occur.
*/
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	lh;
	size_t	ln;
	size_t	i;

	if (!*needle)
		return ((char *)haystack);
	lh = ft_strlen(haystack);
	ln = ft_strlen(needle);
	i = -1;
	while (++i < len && ln + i <= lh)
		if (ft_strnequ(haystack + i, needle, ln) && i + ln <= len)
			return ((char *)(haystack + i));
	return (NULL);
}
