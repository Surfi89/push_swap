/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anleclab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 17:11:28 by anleclab          #+#    #+#             */
/*   Updated: 2019/04/04 09:04:06 by anleclab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Deletes the chained list.
*/
void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*cache;

	if (!*alst)
		return ;
	while ((*alst)->next)
	{
		cache = (*alst)->next;
		ft_lstdelone(alst, del);
		*alst = cache;
	}
	ft_lstdelone(alst, del);
}
