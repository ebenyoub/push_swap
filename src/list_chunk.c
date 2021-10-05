/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_chunk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebenyoub <ebenyoub@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 18:52:48 by ebenyoub          #+#    #+#             */
/*   Updated: 2021/10/05 15:19:14 by ebenyoub         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	create_tab(char **param, t_var *var)
{
	int		i;

	i = 0;
	var->tab = (int *)malloc(sizeof(int) * var->size);
	if (!var->tab)
		m_exit(-1, var);
	var->index = (int *)malloc(sizeof(int) * var->size);
	if (!var->index)
		m_exit(-1, var);
	while (i < var->size)
	{
		var->tab[i] = ft_atoi((const char *)param[i], var);
		var->index[i] = var->tab[i];
		i++;
	}
	sort_index(var);
}

static void	last_chunk(int i, int n, t_var *var)
{
	int		a;
	int		size;

	a = 0;
	size = var->size - n;
	var->last_chunk_size = size;
	var->chunk_tabs[i] = (int *)malloc(sizeof(int) * size);
	if (!var->chunk_tabs[i])
		m_exit(-1, var);
	while (a < size)
		var->chunk_tabs[i][a++] = var->index[n++];
}

static void	create_chunk_next(int *i, int *n, t_var *var)
{
	int		a;
	int		part;

	part = var->part;
	if (var->last_chunk_flag)
		part = part - 1;
	while (*i < part)
	{
		a = 0;
		var->chunk_tabs[*i] = (int *)malloc(sizeof(int) * var->chunk_len);
		if (!var->chunk_tabs[*i])
			m_exit(-1, var);
		while (a < var->chunk_len)
		{
			var->chunk_tabs[*i][a] = var->index[*n];
			a = a + 1;
			*n = *n + 1;
		}
		*i = *i + 1;
	}
}

void	create_chunks(t_var *var)
{
	int		i;
	int		n;

	i = 0;
	n = 0;
	if (var->size % var->part > 0)
	{
		var->last_chunk_flag = true;
		var->part = var->part + 1;
	}
	var->chunk_tabs = (int **)malloc(sizeof(int *) * var->part);
	if (!var->chunk_tabs)
		m_exit(-1, var);
	create_chunk_next(&i, &n, var);
	if (var->last_chunk_flag)
		last_chunk(i, n, var);
}
