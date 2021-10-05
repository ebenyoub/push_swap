/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_index.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebenyoub <ebenyoub@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 18:56:03 by ebenyoub          #+#    #+#             */
/*   Updated: 2021/10/05 15:19:14 by ebenyoub         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	sort_index(t_var *var)
{
	int		i;
	int		j;
	int		tmp;

	i = 0;
	j = 0;
	while (i < var->size)
	{
		j = i;
		while (j < var->size)
		{
			if (var->index[j] < var->index[i])
			{
				tmp = var->index[i];
				var->index[i] = var->index[j];
				var->index[j] = tmp;
			}
			j++;
		}
		i++;
	}
}
