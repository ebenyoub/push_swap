/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mov_rev.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebenyoub <ebenyoub@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 00:27:29 by ebenyoub          #+#    #+#             */
/*   Updated: 2021/10/04 19:49:02 by ebenyoub         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	rev_rra(t_var *var)
{
	t_node	*tmp;

	if (!(A->be) || !(A->be->next))
		return ;
	tmp = new_element(A->end->nb, var);
	lstpop_back('a', var);
	lstadd_front('a', var, tmp);
	if (!F)
	{
		ft_putstr("rra\n");
		var->tap++;
	}
}

void	rev_rrb(t_var *var)
{
	t_node	*tmp;

	if (!B->be || !B->be->next)
		return ;
	tmp = new_element(B->end->nb, var);
	lstpop_back('b', var);
	lstadd_front('b', var, tmp);
	if (!F)
	{
		ft_putstr("rrb\n");
		var->tap++;
	}
}

void	rev_rrr(t_var *var)
{
	F = true;
	rev_rra(var);
	rev_rrb(var);
	F = false;
	ft_putstr("rrr\n");
	var->tap++;
}

void	q_rev(t_var *var)
{
	if (!Q)
		rev_rra(var);
	else
		rev_rrb(var);
}
