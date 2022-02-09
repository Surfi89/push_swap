/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anleclab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 10:39:26 by anleclab          #+#    #+#             */
/*   Updated: 2019/04/04 08:55:11 by anleclab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Returns true if the character is within the ASCII range, false otherwise.
*/
int		ft_isascii(int c)
{
	return ((c >= 0 && c <= 127));
}
