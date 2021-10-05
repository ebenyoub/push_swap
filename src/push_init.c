/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_init.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebenyoub <ebenyoub@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 00:14:29 by ebenyoub          #+#    #+#             */
/*   Updated: 2021/10/04 23:07:14 by ebenyoub         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

static void	param_chekin(t_var *var, int argc, char **argv)
{
	int a;
	int i;

	a = 1;
	while (a < argc)
	{
		i = 0;
		if (argv[a][i] == '-')
			i++;
		while (argv[a][i])
		{
			if (!ft_isdigit(argv[a][i]))
				m_exit(-1, var);
			i++;
		}
		a++;
	}
}

static void	param_duplicate(t_var *var, int argc, char **argv)
{
	int	    i;
	int		j;

	j = 0;
	while (argv[j] && j < argc)
	{
		i = 1 + j;
		while (argv[i] && i < argc)
		{
			if (!ft_strcmp(argv[i], argv[j]))
				m_exit(-1, var);
			i++;
		}
		j++;
	}
}

int     	param_size(char **tab)
{
	int i;

	i = 0;
	while (tab[i])
		i++;
	return (i);
}

static void	param_init_next(char **param, t_var *var)
{
	var->chunk_tabs = NULL;
	var->index = NULL;
	var->tab = NULL;
	var->sp_count = 0;
	var->sp_tab = NULL;
	var->sp_mark = NULL;
	var->flag = false;
	var->alt = false;
	var->last_chunk_flag = false;
	var->last_chunk_size = 0;
	var->tap = 0;
	var->nb = 0;
	create_tab(param, var);
	param_chekin(var, S, param);
	param_duplicate(var, S, param);
	A = make_list(var);
	B = new_list(var);
	create_chunks(var);
}

void    	param_init(int argc, char **argv, t_var *var)
{
	char	**param;

	if (argc == 2)
		param = ft_split((const char *)argv[1], ' ', var);
	else
		param = &argv[1];
	printf("tab[0] = %s", var->sp_tab[0]);
	S = param_size(param);
	if (S <= 100)
	{
		P = 5;
		C = S / 5;
	}
	else
	{
		P = 11;
		C = S / 11;
	}
	param_init_next(param, var);
}