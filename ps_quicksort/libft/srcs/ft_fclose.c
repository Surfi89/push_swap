/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fclose.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anleclab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 15:14:07 by anleclab          #+#    #+#             */
/*   Updated: 2019/04/04 08:54:38 by anleclab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Closes the file descriptor and frees the buffer contained in the stream.
*/
int		ft_fclose(t_file **stream)
{
	if (!stream || !*stream)
		return (0);
	if (close((*stream)->fd) == -1)
		return (-1);
	free(*stream);
	*stream = NULL;
	return (0);
}
