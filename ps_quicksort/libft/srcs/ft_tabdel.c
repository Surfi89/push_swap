/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anleclab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/04 11:17:44 by anleclab          #+#    #+#             */
/*   Updated: 2019/04/04 12:17:00 by anleclab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Frees the strings of a NULL terminated array of strings and frees the array.
*/
void	ft_tabdel(char ***tab)
{
	char **		cache;

	if (!tab)
		return ;
	cache = *tab;
	while (*cache)
	{
		free(*cache);
		cache++;
	}
	free(*tab);
	*tab = NULL;
}
