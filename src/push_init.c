/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_init.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebenyoub <ebenyoub@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 00:14:29 by ebenyoub          #+#    #+#             */
/*   Updated: 2021/10/06 13:14:46 by ebenyoub         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

static void	param_chekin(t_var *var, int argc, char **argv)
{
	int	a;
	int	i;
	int	r;

	a = 1;
	r = 0;
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
	int	i;
	int	j;

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

int	param_size(char **tab)
{
	int	i;

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
	param_chekin(var, var->size, param);
	param_duplicate(var, var->size, param);
	var->la = make_list(var);
	var->lb = new_list(var);
	create_chunks(var);
}

void	param_init(int argc, char **argv, t_var *var)
{
	char	**param;

	if (argc == 2)
		param = ft_split(argv[1]);
	else
		param = &argv[1];
	var->size = param_size(param);
	if (var->size <= 100)
	{
		var->part = 5;
		var->chunk_len = var->size / 5;
	}
	else
	{
		var->part = 11;
		var->chunk_len = var->size / 11;
	}
	param_init_next(param, var);
}
