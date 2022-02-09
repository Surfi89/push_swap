/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anleclab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 14:35:56 by anleclab          #+#    #+#             */
/*   Updated: 2019/04/04 09:57:07 by anleclab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Compares s1 and s2 and returns 0 if they are similar, a different value
** otherwise.
*/
int		ft_strcmp(const char *s1, const char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return ((unsigned char)(*s1) - (unsigned char)(*s2));
}
