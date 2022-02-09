/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_pile.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaiel <anaiel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/03 18:34:48 by anleclab          #+#    #+#             */
/*   Updated: 2019/02/06 15:13:57 by anleclab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "common.h"

static int	is_unique(int *pile, int index)
{
	int		i;

	i = -1;
	while (++i < index)
		if (pile[i] == pile[index])
			return (0);
	return (1);
}

static int	go_to_start(char ***input)
{
	int		sign;

	while ((***input < '0' || ***input > '9') && ***input != '-')
	{
		if (!***input)
			(*input)++;
		else if (***input == ' ' || ***input == '\t')
			(**input)++;
		else
			return (0);
	}
	sign = (***input == '-') ? -1 : 1;
	**input = (***input == '-') ? **input + 1 : **input;
	if (***input < '0' || ***input > '9')
		return (0);
	return (sign);
}

static int	get_number(int *nbr, char ***input)
{
	int		sign;

	*nbr = 0;
	if (!(sign = go_to_start(input)))
		return (0);
	while (***input >= '0' && ***input <= '9')
	{
		if (*nbr > INT_MAX / 10 || (*nbr == INT_MAX / 10 && (***input > '8'
				|| (***input == '8' && sign == 1))))
			return (0);
		else if (*nbr == INT_MAX / 10 && ***input == '8' && sign == -1)
		{
			sign = 1;
			*nbr = -10 * *nbr - 8;
		}
		else
			*nbr = 10 * *nbr + ***input - '0';
		(**input)++;
	}
	if (***input != ' ' && ***input != 0 && ***input != '\t')
		return (0);
	*nbr *= sign;
	return (1);
}

int			get_ttl_len(char **input, int len)
{
	int		res;
	int		i;
	int		j;

	res = 0;
	i = -1;
	while (++i < len && (j = -1))
		while (input[i][++j])
			if (j == 0 && input[i][j] != ' ')
				res += 1;
			else if (input[i][j] != ' ' && input[i][j - 1] == ' ')
				res += 1;
	return (res);
}

int			*get_pile(char **input, int *len)
{
	int		*res;
	int		ttl_len;
	int		i;

	ttl_len = get_ttl_len(input, *len);
	if (!(res = (int *)malloc(sizeof(int) * ttl_len)))
		return (NULL);
	i = -1;
	while (++i < ttl_len)
	{
		if (!get_number(res + i, &input) || !is_unique(res, i))
		{
			free(res);
			return (NULL);
		}
	}
	*len = ttl_len;
	return (res);
}
