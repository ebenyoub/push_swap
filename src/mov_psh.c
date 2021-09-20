/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mov_psh.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebenyoub <ebenyoub@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 16:43:37 by ebenyoub          #+#    #+#             */
/*   Updated: 2021/09/20 15:04:29 by ebenyoub         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/push_swap.h"

void    psh_pb(t_var *var)
{
	t_node	*new;

	if (!A->be)
		return ;
	new = new_element(A->be->nb);
	lstpop_front(A);
	if (!B->be)
	{
		B->be = new;
		B->end = new;
	}
	else
		lstadd_front(B, new);
	ft_putstr("pb\n");
	print_lst(A->be);
	print_lst(B->be);
}

void    psh_pa(t_var *var)
{
	t_node	*new;

	if (!B->be)
		return ;
	new = new_element(B->be->nb);
	lstpop_front(B);
	if (!A->be)
	{
		A->be = new;
		A->end = new;
	}
	else
		lstadd_front(A, new);
	ft_putstr("pa\n");
	print_lst(A->be);
	print_lst(B->be);
}