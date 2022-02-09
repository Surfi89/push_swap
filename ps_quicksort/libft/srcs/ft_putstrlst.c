/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrlst.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anleclab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 09:21:58 by anleclab          #+#    #+#             */
/*   Updated: 2019/04/04 09:34:22 by anleclab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Prints the content of the links of a chained list, separated by a newline.
*/
void	ft_putstrlst(t_list *lst)
{
	if (!lst)
		return ;
	write(1, lst->content, lst->content_size);
	ft_putchar('\n');
	ft_putstrlst(lst->next);
}
