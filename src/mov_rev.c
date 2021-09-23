/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mov_rev.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebenyoub <ebenyoub@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 00:27:29 by ebenyoub          #+#    #+#             */
/*   Updated: 2021/09/23 17:15:25 by ebenyoub         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/push_swap.h"

void    rev_rra(t_var *var)
{
	t_node	*tmp;

	if (!(A)->be || !(A)->be->next)
		return ;
	tmp = new_element(A->end->nb);
	lstpop_back('a', var);
	lstadd_front('a', var, tmp);
	!(F) ? ft_putstr("rra") : 0;
	!(F) ? var->tap++ : 0; PRINT
}

void    rev_rrb(t_var *var)
{
	t_node	*tmp;

	if (!B->be || !B->be->next)
		return ;
	tmp = new_element(B->end->nb);
	lstpop_back('b', var);
	lstadd_front('b', var, tmp);
	!(F) ? ft_putstr("rrb") : 0;
	!(F) ? var->tap++ : 0; PRINT
}

void    rev_rrr(t_var *var)
{
	F = true;
    rev_rra(var);
    rev_rrb(var);
	F = false;
    ft_putstr("rrr");
	var->tap++;
}