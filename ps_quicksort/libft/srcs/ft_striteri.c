/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anleclab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 13:49:58 by anleclab          #+#    #+#             */
/*   Updated: 2019/04/04 10:05:51 by anleclab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Applies the function to every character of the string. The function takes the
** index of the character in the string as a parameter.
*/
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = -1;
	while (s[++i])
		f(i, s + i);
}
