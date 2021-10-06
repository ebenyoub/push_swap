/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mov_rev.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebenyoub <ebenyoub@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 00:27:29 by ebenyoub          #+#    #+#             */
/*   Updated: 2021/10/06 15:53:15 by ebenyoub         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	rev_rra(t_var *var)
{
	t_node	*tmp;

	if (!(var->la->be) || !(var->la->be->next))
		return ;
	tmp = new_element(var->la->end->nb);
	lstpop_back('a', var);
	lstadd_front('a', var, tmp);
	if (!var->flag)
	{
		ft_putstr("rra\n");
		var->tap++;
	}
}

void	rev_rrb(t_var *var)
{
	t_node	*tmp;

	if (!var->lb->be || !var->lb->be->next)
		return ;
	tmp = new_element(var->lb->end->nb);
	lstpop_back('b', var);
	lstadd_front('b', var, tmp);
	if (!var->flag)
	{
		ft_putstr("rrb\n");
		var->tap++;
	}
}

void	rev_rrr(t_var *var)
{
	var->flag = TRUE;
	rev_rra(var);
	rev_rrb(var);
	var->flag = FALSE;
	ft_putstr("rrr\n");
	var->tap++;
}

void	q_rev(t_var *var)
{
	if (!var->alt)
		rev_rra(var);
	else
		rev_rrb(var);
}
