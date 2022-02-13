/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajordan- <ajordan-@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 18:58:34 by ajordan-          #+#    #+#             */
/*   Updated: 2022/02/12 19:02:42 by ajordan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include <stdio.h>
# include <unistd.h>
# include "stdlib.h"
# include "../../ft_printf/includes/ft_printf.h"

typedef struct	s_stacks
{
	long	*a;
	long	*b;
	int	size_a;
	int	size_b;
}	t_stacks;



#endif
