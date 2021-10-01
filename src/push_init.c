/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_init.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebenyoub <ebenyoub@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 00:14:29 by ebenyoub          #+#    #+#             */
/*   Updated: 2021/09/30 18:10:33 by ebenyoub         ###   ########lyon.fr   */
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
			(!ft_isdigit(argv[a][i])) ? m_exit() : 0;
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
			(!ft_strcmp(argv[i], argv[j])) ? m_exit() : 0;
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

void	create_tab(int *argc, char **param, t_var **var)
{
	int		i;

	i = 0;
	!((*var)->tab = (int *)malloc(sizeof(int) * (*(argc)))) ? m_exit() : 0;
	!((*var)->index = (int *)malloc(sizeof(int) * (*(argc)))) ? m_exit() : 0;
	while (i < *argc)
	{
		(*var)->tab[i] = ft_atoi((const char *)param[i]);
		(*var)->index[i] = (*var)->tab[i];
		i++;
	}
}

void    param_init(int *argc, char **argv, t_var **var)
{
	char	**param;

	!(*var = (t_var *)malloc(sizeof(t_var))) ? m_exit() : 0;
	if (*argc == 2)
		param = ft_split((const char *)argv[1], ' ');
	else
		param = &argv[1];
	*argc = param_size(param);
	param_chekin(*argc, param);
	create_tab(argc, param, var);
	(*var)->flag = false;
	(*var)->tap = 0;
	(*var)->alt = false;
	(*var)->nb = 0;
	(*var)->last_chunk = 0;
	param_duplicate(*argc, param);
}