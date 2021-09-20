/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mov_rev.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebenyoub <ebenyoub@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 00:27:29 by ebenyoub          #+#    #+#             */
/*   Updated: 2021/09/20 15:07:56 by ebenyoub         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/push_swap.h"

void    rev_rra(t_var *var)
{
	t_node	*tmp;

	if (!A->be || !A->be->next)
		return ;
	tmp = new_element(A->end->nb);
	lstpop_back(A);
	lstadd_front(A, tmp);
	!F ? ft_putstr("rra\n") : 0;
	print_lst(A->be);
	print_lst(B->be);
}

void    rev_rrb(t_var *var)
{
	t_node	*tmp;

	if (!B->be || !B->be->next)
		return ;
	tmp = new_element(B->end->nb);
	lstpop_back(B);
	lstadd_front(B, tmp);
	!F ? ft_putstr("rrb\n") : 0;
	print_lst(A->be);
	print_lst(B->be);
}

void    rev_rrr(t_var *var)
{
	F = true;
    rev_rra(var);
    rev_rrb(var);
	F = false;
    ft_putstr("rrr\n");
}