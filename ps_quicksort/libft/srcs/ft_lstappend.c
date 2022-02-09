/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstappend.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anleclab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 22:09:10 by anleclab          #+#    #+#             */
/*   Updated: 2019/04/04 09:03:51 by anleclab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Adds the given link at the end of the chained list.
*/
void	ft_lstappend(t_list **lst, t_list *link)
{
	t_list *cache;

	if (!lst)
		return ;
	if (!*lst)
		*lst = link;
	else
	{
		cache = *lst;
		while (cache->next)
			cache = cache->next;
		cache->next = link;
	}
}
