/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebenyoub <ebenyoub@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 16:56:50 by ebenyoub          #+#    #+#             */
/*   Updated: 2021/10/04 15:43:41 by ebenyoub         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/push_swap.h"

void	sort_push(int n, t_var *var)
{
	if (n < 0)
	{
		n = -n;
		while (n > 0)
		{
			!Q ? rev_rra(var) : rev_rrb(var);
			n--;
		}
	}
	else
	{
		while (n > 1)
		{
			!Q ? rot_ra(var) : rot_rb(var);
			n--;
		}
	}
	!Q ? psh_pb(var) : psh_pa(var);
}

void    sort_big(t_var *var)
{
	int     c;
	int		n;
	int		i;

	c = 0;
	i = 0;
	n = 0;
	create_chunks(var);
	while (L != 0)
	{
		n = find_nb(c, var);
		sort_push(n, var);
		i++;
		i == C ? c++ : 0;
		i == C ? i = 0 : 0;
	}
	free_tab(K, var);
	Q = true;
	sort_final(var);
}