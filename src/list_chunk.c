/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_chunk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebenyoub <ebenyoub@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 18:52:48 by ebenyoub          #+#    #+#             */
/*   Updated: 2021/10/04 21:33:07 by ebenyoub         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	create_tab(char **param, t_var *var)
{
	int		i;

	i = 0;
	T = (int *)malloc(sizeof(int) * S);
	if (!T)
		m_exit(-1, var);
	I = (int *)malloc(sizeof(int) * S);
	if (!I)
		m_exit(-1, var);
	while (i < S)
	{
		T[i] = ft_atoi((const char *)param[i], var);
		I[i] = T[i];
		i++;
	}
	sort_index(var);
}

static void	last_chunk(int i, int n, t_var *var)
{
	int		a;
	int		size;

	a = 0;
	size = S - n;
	var->last_chunk_size = size;
	K[i] = (int *)malloc(sizeof(int) * size);
	if (!K[i])
		m_exit(-1, var);
	while (a < size)
		K[i][a++] = I[n++];
}

static void	create_chunk_next(int *i, int *n, t_var *var)
{
	int		a;
	int		part;

	part = P;
	if (H)
		part = part - 1;
	while (*i < part)
	{
		a = 0;
		K[*i] = (int *)malloc(sizeof(int) * C);
		if (!K[*i])
			m_exit(-1, var);
		while (a < C)
		{
			K[*i][a] = I[*n];
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
	if (S % P > 0)
	{
		H = true;
		P = P + 1;
	}
	K = (int **)malloc(sizeof(int *) * P);
	if (!K)
		m_exit(-1, var);
	create_chunk_next(&i, &n, var);
	if (H)
		last_chunk(i, n, var);
}
