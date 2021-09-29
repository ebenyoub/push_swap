/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_index.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebenyoub <ebenyoub@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 18:56:03 by ebenyoub          #+#    #+#             */
/*   Updated: 2021/09/29 15:31:53 by ebenyoub         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/push_swap.h"

void	last_chunk(int i, int n, t_var *var)
{
	int		a;
	int		size;

	a = 0;
	size = S - n;
	!(var->chunk_tabs[i] = (int *)malloc(sizeof(int) * size)) ? m_exit() : 0;
	while (a < size)
	{
		var->chunk_tabs[i][a] = I[n];
		a++;
		n++;	
	}
}

void	create_chunks(t_var *var)
{
	int		i;
	int		c;
	int		a;
	int		n;

	i = 0;
	n = 0;
	c = S <= 100 ? 5 : 11;
	!(var->chunk_tabs = (int **)malloc(sizeof(int *) * c  + 1)) ? m_exit() : 0;
	while (i < c)
	{
		a = 0;
		!(var->chunk_tabs[i] = (int *)malloc(sizeof(int) * S - n)) ? m_exit() : 0;
		while (a < S - n)
		{
			var->chunk_tabs[i][a] = I[n];
			a++;
			n++;
		}
		i++;
	}
	last_chunk(i, n, var);
}

void	find_median(t_var *var)
{
	var->size = var->la->length;
	M = L / 2;
	L % 2 == 0 ? M = M - 1 : 0;
	S <= 100 ? (C = S / 5) : (C = S / 11);
}

void	sort_index(t_var *var)
{
	int		i;
	int		j;
	int		tmp;

	i = 0;
	j = 0;
	while (i < A->length)
	{
		j = i;
		while (j < A->length)
		{
			if (I[j] < I[i])
			{
				tmp = I[i];
				I[i] = I[j];
				I[j] = tmp;
			}
			j++;
		}
		i++;
	}
}