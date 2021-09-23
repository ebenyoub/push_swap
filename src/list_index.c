/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_index.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebenyoub <ebenyoub@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 18:56:03 by ebenyoub          #+#    #+#             */
/*   Updated: 2021/09/23 17:42:52 by ebenyoub         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/push_swap.h"

# define T	var->tab
# define I	var->index

void	find_median(t_var *var)
{
	M = A->length / 2;
	M * 2 < A->length ? M = M + 1 : 0;
	A->length <= 100 ? C = A->length / 5 : 0;
	A->length <= 500 ? C = A->length / 11 : 0;
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