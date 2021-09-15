/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_init.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebenyoub <ebenyoub@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 00:14:29 by ebenyoub          #+#    #+#             */
/*   Updated: 2021/09/14 22:27:25 by ebenyoub         ###   ########lyon.fr   */
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
		while (argv[i + 1] && i < argc)
		{
			(!ft_strcmp(argv[i + 1], argv[j + 1])) ? m_exit() : 0;
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

void    param_init(int *argc, char **argv, t_var **var)
{
	int     i;
	char	**param;

	i = 0;
	!(*var = (t_var *)malloc(sizeof(t_var))) ? m_exit() : 0;
	if (*argc == 2)
	{
		param = ft_split((const char *)argv[1], ' ');
	}
	else
		param = &argv[1];
	*argc = param_size(param);
	!((*var)->tab = (int *)malloc(sizeof(int) * (*(argc)))) ? m_exit() : 0;
	while (i < *argc)
	{
		(*var)->tab[i] = ft_atoi((const char *)param[i]);
		i++;
	}
	(*var)->rr = true;
	param_chekin(*argc, param);
	param_duplicate(*argc, param);
}