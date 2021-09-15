/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mov_psh.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebenyoub <ebenyoub@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 16:43:37 by ebenyoub          #+#    #+#             */
/*   Updated: 2021/09/15 01:12:18 by ebenyoub         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/push_swap.h"

void    psh_pb(t_var *var)
{
	t_node	*new;

	if (!var->lst_a->begin)
		return ;
	new = new_element(var->lst_a->begin->content);
	lstpop_front(var->lst_a);
	if (!var->lst_b->begin)
	{
		var->lst_b->begin = new;
		var->lst_b->end = new;
	}
	else
		lstadd_front(var->lst_b, new);
	ft_putstr("pb\n");
}

void    psh_pa(t_var *var)
{
	t_node	*new;

	if (!var->lst_b->begin)
		return ;
	new = new_element(var->lst_b->begin->content);
	lstpop_front(var->lst_b);
	if (!var->lst_a->begin)
	{
		var->lst_a->begin = new;
		var->lst_a->end = new;
	}
	else
		lstadd_front(var->lst_a, new);
	ft_putstr("pa\n");
}