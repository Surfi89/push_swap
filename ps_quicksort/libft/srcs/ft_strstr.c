/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anleclab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 17:18:40 by anleclab          #+#    #+#             */
/*   Updated: 2019/04/04 12:04:54 by anleclab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Returns a pointer to the first occurence of needle in haystack, or NULL is
** needle does not occur.
*/
char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	ln;
	size_t	lh;

	if (!*needle)
		return ((char *)haystack);
	ln = ft_strlen(needle);
	lh = ft_strlen(haystack);
	if (lh < ln)
		return (NULL);
	else if (ft_strnequ(haystack, needle, ln))
		return ((char *)haystack);
	else
		return (ft_strstr(haystack + 1, needle));
}
