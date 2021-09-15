/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mov_rev.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebenyoub <ebenyoub@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 00:27:29 by ebenyoub          #+#    #+#             */
/*   Updated: 2021/09/15 01:25:00 by ebenyoub         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/push_swap.h"

void    rev_rra(t_var *var)
{
	t_node	*tmp;

	if (!var->lst_a->begin || !var->lst_a->begin->next)
		return ;
	tmp = new_element(var->lst_a->end->content);
	lstpop_back(var->lst_a);
	lstadd_front(var->lst_a, tmp);
	var->rr ? ft_putstr("rra\n") : 0;
}

void    rev_rrb(t_var *var)
{
	t_node	*tmp;

	if (!var->lst_b->begin || !var->lst_b->begin->next)
		return ;
	tmp = new_element(var->lst_b->end->content);
	lstpop_back(var->lst_b);
	lstadd_front(var->lst_b, tmp);
	var->rr ? ft_putstr("rrb\n") : 0;
}

void    rev_rrr(t_var *var)
{
	var->rr = false;
    rev_rra(var);
    rev_rrb(var);
	var->rr = true;
    ft_putstr("rrr\n");
}