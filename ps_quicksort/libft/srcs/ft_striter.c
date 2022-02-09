/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anleclab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 13:40:06 by anleclab          #+#    #+#             */
/*   Updated: 2019/04/04 10:03:44 by anleclab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Applies the function to every character of the string.
*/
void	ft_striter(char *s, void (*f)(char *))
{
	if (!s || !f)
		return ;
	while (*s)
	{
		f(s);
		s++;
	}
}
