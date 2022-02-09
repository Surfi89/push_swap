/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anleclab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 17:57:19 by anleclab          #+#    #+#             */
/*   Updated: 2019/04/04 12:34:27 by anleclab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Returns a new chained list composed of links which are copies of the links
** in the original list to which is applied the function.
*/
t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *map_lst;

	map_lst = NULL;
	while (lst)
	{
		ft_lstappend(&map_lst, f(lst));
		lst = lst->next;
	}
	return (map_lst);
}
