/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebenyoub <ebenyoub@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 16:56:50 by ebenyoub          #+#    #+#             */
/*   Updated: 2021/10/04 20:38:40 by ebenyoub         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	sort_push(int n, t_var *var)
{
	if (n < 0)
	{
		n = -n;
		while (n > 0)
		{
			q_rev(var);
			n--;
		}
	}
	else
	{
		while (n > 1)
		{
			q_rot(var);
			n--;
		}
	}
	q_push(var);
}

void	sort_big(t_var *var)
{
	int	c;
	int	n;
	int	i;

	c = 0;
	i = 0;
	n = 0;
	while (A->length > 0)
	{
		n = find_nb(c, var);
		sort_push(n, var);
		i++;
		if (i == C)
		{
			c++;
			i = 0;
		}
	}
	Q = true;
	sort_final(var);
}
