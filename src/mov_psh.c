/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mov_psh.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebenyoub <ebenyoub@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 16:43:37 by ebenyoub          #+#    #+#             */
/*   Updated: 2021/10/05 15:19:29 by ebenyoub         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	psh_pb(t_var *var)
{
	t_node	*new;

	if (!(var->la->be))
		return ;
	new = new_element(var->la->be->nb, var);
	lstpop_front('a', var);
	if (!var->lb->be)
	{
		var->lb->be = new;
		var->lb->end = new;
		var->lb->length++;
	}
	else
		lstadd_front('b', var, new);
	ft_putstr("pb\n");
	var->tap++;
}

void	psh_pa(t_var *var)
{
	t_node	*new;

	if (!var->lb->be)
		return ;
	new = new_element(var->lb->be->nb, var);
	lstpop_front('b', var);
	if (!(var->la)->be)
	{
		var->la->be = new;
		var->la->end = new;
		var->la->length++;
	}
	else
		lstadd_front('a', var, new);
	ft_putstr("pa\n");
	var->tap++;
}

void	q_push(t_var *var)
{
	if (!var->alt)
		psh_pb(var);
	else
		psh_pa(var);
}
