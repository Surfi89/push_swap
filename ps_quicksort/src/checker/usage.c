/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   usage.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anleclab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/06 14:50:23 by anleclab          #+#    #+#             */
/*   Updated: 2019/02/06 15:04:44 by anleclab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	usage(void)
{
	ft_putstr("usage: ./checker [-vc] [-i input_file] int_list\n(NB: checker");
	ft_putstr(" will use ");
	ft_putstr("instructions provided in the standard input or given file with");
	ft_putstr(" -i option)\n");
	exit(0);
}
