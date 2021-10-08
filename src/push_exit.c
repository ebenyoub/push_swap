/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_exit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebenyoub <ebenyoub@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 00:26:18 by ebenyoub          #+#    #+#             */
/*   Updated: 2021/10/08 12:51:10 by ebenyoub         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	free_tab(int **tab, t_var *var)
{
	int	i;

	i = 0;
	while (i < var->part)
	{
		if (tab[i])
			free(tab[i]);
		i++;
	}
	if (tab)
		free(tab);
}

void	free_tab_char(char **tab)
{
	int	i;

	i = 0;
	if (tab)
	{
		while (tab[i])
		{
			free(tab[i]);
			tab[i] = NULL;
			i++;
		}
		free(tab);
	}
}

void	push_free(t_var *var)
{
	free_list(var);
	free_tab(var->chunk_tabs, var);
	if (var->tab)
		free(var->tab);
	if (var->index)
		free(var->index);
	var->tab = NULL;
	var->index = NULL;
}

void	list_less_exit(void)
{
	ft_putstr("Error\n");
	exit (EXIT_FAILURE);
}

void	m_exit(int err, t_var *var)
{
	if (err == -1)
		ft_putstr("Error\n");
	push_free(var);
	exit (EXIT_FAILURE);
}
