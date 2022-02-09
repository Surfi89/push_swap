/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplitlst.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anleclab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 17:33:51 by anleclab          #+#    #+#             */
/*   Updated: 2019/04/04 12:34:54 by anleclab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Returns a chained list where all the links contain the result of splitting
** the given string with the given separator.
*/
t_list	*ft_strsplitlst(char *s, char c)
{
	t_list	*res;
	t_list	*new;
	char	*word;
	size_t	len;

	if (!s)
		return (NULL);
	res = NULL;
	while (*s)
	{
		while (*s == c)
			s++;
		if (!*s)
			return (res);
		len = 0;
		while (s[len] && s[len] != c)
			len++;
		if (!(word = ft_strsub(s, 0, len)))
			return (res);
		if (!(new = ft_lstnew(word, sizeof(char) * len)))
		{
			free(word);
			return (res);
		}
		ft_lstappend(&res, new);
		s += len;
	}
	return (res);
}
