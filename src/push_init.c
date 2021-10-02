/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_init.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebenyoub <ebenyoub@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 00:14:29 by ebenyoub          #+#    #+#             */
/*   Updated: 2021/10/02 17:33:15 by ebenyoub         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void     param_chekin(int argc, char **argv)
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
			(!ft_isdigit(argv[a][i])) ? m_exit(-1) : 0;
			i++;
		}
		a++;
	}
}

void	param_duplicate(int argc, char **argv)
{
	int	    i;
	int		j;

	j = 0;
	while (argv[j] && j < argc)
	{
		i = 1 + j;
		while (argv[i] && i < argc)
		{
			(!ft_strcmp(argv[i], argv[j])) ? m_exit(-1) : 0;
			i++;
		}
		j++;
	}
}

int     param_size(char **tab)
{
	int i;

	i = 0;
	while (tab[i])
		i++;
	return (i);
}

void	create_tab(char **param, t_var *var)
{
	int		i;

	i = 0;
	!(var->tab = (int *)malloc(sizeof(int) * S)) ? m_exit(-1) : 0;
	!(var->index = (int *)malloc(sizeof(int) * S)) ? m_exit(-1) : 0;
	while (i < S)
	{
		var->tab[i] = ft_atoi((const char *)param[i]);
		var->index[i] = var->tab[i];
		i++;
	}
	sort_index(var);
}

void    param_init(int argc, char **argv, t_var *var)
{
	char	**param;

	param = (argc == 2) ? ft_split((const char *)argv[1], ' ') : &argv[1];
	S = param_size(param);
	P = S <= 100 ? 6 : 11;
	C = S <= 100 ? S / 6 : S / 11;
	create_tab(param, var);
	param_chekin(S, param);
	param_duplicate(S, param);
	A = make_list(var);
	B = new_list(); 
	var->flag = false;
	var->alt = false;
	var->last_chunk_size = 0;
	var->tap = 0;
	var->nb = 0;
}