/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anleclab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 09:06:03 by anleclab          #+#    #+#             */
/*   Updated: 2019/04/04 12:29:23 by anleclab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nb_words(char const *s, char c)
{
	int		res;

	res = 0;
	while (*s)
		if (*s == c)
			s++;
		else
		{
			res++;
			while (*s && *s != c)
				s++;
		}
	return (res);
}

static int	word_len(char const *s, char c)
{
	int		res;

	res = 0;
	while (s[res] && s[res] != c)
		res++;
	return (res);
}

/*
** Returns an NULL terminated array of strings which are the differents parts
** of the given string when split with character c.
*/
char		**ft_strsplit(char const *s, char c)
{
	int		nbwords;
	int		count;
	char	**res;

	if (!s)
		return (NULL);
	nbwords = nb_words(s, c);
	if (!(res = (char **)malloc(sizeof(char *) * (nbwords + 1))))
		return (NULL);
	count = -1;
	while (*s)
		if (*s == c)
			s++;
		else
		{
			if (!(res[++count] = ft_strnew(word_len(s, c))))
			{
				while (--count >= 0)
					free(res[count]);
				free(res);
				return (NULL);
			}
			ft_strncpy(res[count], s, word_len(s, c));
			while (*s && *s != c)
				s++;
		}
	res[++count] = NULL;
	return (res);
}
