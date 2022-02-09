/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   common.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaiel <anaiel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/05 11:45:00 by anleclab          #+#    #+#             */
/*   Updated: 2019/02/06 20:30:02 by anleclab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COMMON_H
# define COMMON_H

# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include "libft.h"

# define INT_MAX 2147483647

typedef struct	s_piles
{
	int		*a;
	int		*b;
	int		alen;
	int		blen;
}				t_piles;

typedef enum	e_opt
{
	NONE,
	INSTR_ONLY,
	VISUAL,
	COLOR,
	ERROR
}				t_opt;

typedef struct	s_fun {
	char	*instr;
	void	(*f)(t_piles *, t_opt);
}				t_fun;

int				*get_pile(char **input, int *len);
t_opt			get_opt(int *ac, char ***av, int get_stream, t_file **stream);
t_fun			*initialize_fun_list(void);
void			delete_funlist(t_fun *fun_list);
int				follow_instructions(t_piles *piles, t_fun *fun_list,
		char *instr, t_opt opt);
void			sa(t_piles *piles, t_opt opt);
void			sb(t_piles *piles, t_opt opt);
void			ss(t_piles *piles, t_opt opt);
void			pa(t_piles *piles, t_opt opt);
void			pb(t_piles *piles, t_opt opt);
void			ra(t_piles *piles, t_opt opt);
void			rb(t_piles *piles, t_opt opt);
void			rr(t_piles *piles, t_opt opt);
void			rra(t_piles *piles, t_opt opt);
void			rrb(t_piles *piles, t_opt opt);
void			rrr(t_piles *piles, t_opt opt);
void			print_instr(char *instr, t_opt opt);
void			print_a(t_piles piles, t_opt opt, int imin, int imax);
void			print_b(t_piles piles, t_opt opt, int imin, int imax);

#endif
