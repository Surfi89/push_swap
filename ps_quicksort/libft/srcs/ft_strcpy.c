/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anleclab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 15:53:16 by anleclab          #+#    #+#             */
/*   Updated: 2019/04/04 09:58:14 by anleclab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Copies the content of src on dst.
*/
char	*ft_strcpy(char *dst, const char *src)
{
	int		i;

	i = -1;
	while (src[++i])
		dst[i] = src[i];
	dst[i] = src[i];
	return (dst);
}
