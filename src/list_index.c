/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_index.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebenyoub <ebenyoub@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 18:56:03 by ebenyoub          #+#    #+#             */
/*   Updated: 2021/10/04 16:16:48 by ebenyoub         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/push_swap.h"

void	last_chunk(int i, int n, t_var *var)
{
	int		a;
	int		size;

	a = 0;
	size = S - n;
	var->last_chunk_size = size;
	!(K[i] = (int *)malloc(sizeof(int) * size)) ? m_exit(-1) : 0;
	while (a < size)
		K[i][a++] = I[n++];
}

void	create_chunks(t_var *var)
{
	int		i;
	int		a;
	int		n;

	i = 0;
	n = 0;
	H = (S % P == 0) ? false : true;
	H ? P = P + 1 : 0;
	!(K = (int **)malloc(sizeof(int *) * P)) ? m_exit(-1) : 0;
	while (i < P - (H ? 1 : 0))
	{
		printf("i = %d\n", i);
		a = 0;
		!(K[i] = (int *)malloc(sizeof(int) * C)) ? m_exit(-1) : 0;
		while (a < C)
		{
			K[i][a] = I[n];
			a++;
			n++;
			i++;
		}
	}
	H ? last_chunk(i, n, var) : 0;
}

void	sort_index(t_var *var)
{
	int		i;
	int		j;
	int		tmp;

	i = 0;
	j = 0;
	while (i < S)
	{
		j = i;
		while (j < S)
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