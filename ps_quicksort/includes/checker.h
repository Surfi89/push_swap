/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaiel <anaiel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/03 18:15:19 by anleclab          #+#    #+#             */
/*   Updated: 2019/02/06 21:31:42 by anleclab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include "common.h"

void	usage(void);
void	checker(t_piles piles);
void	get_instr(char **instr, t_file *stream);
int		instr_check(char *instr, t_fun *fun_list);

#endif
