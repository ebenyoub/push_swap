/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebenyoub <ebenyoub@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 16:56:50 by ebenyoub          #+#    #+#             */
/*   Updated: 2021/09/30 18:48:36 by ebenyoub         ###   ########lyon.fr   */
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
	create_chunks(var);
	while (L != 0)
	{
		n = find_nb(c, var);
		// printf("M = %d | n ==> %d\n", M, n);
		sort_push(n, var);
		i++;
		M = L / 2;
		L % 2 == 0 ? M = M - 1 : 0;
		i == C ? c++ : 0;
		i == C ? i = 0 : 0;
		//PRINT
	}
	Q = true;  //PRINT
	sort_final(var);
}