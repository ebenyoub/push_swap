/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mov_psh.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebenyoub <ebenyoub@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 16:43:37 by ebenyoub          #+#    #+#             */
/*   Updated: 2021/09/23 17:15:25 by ebenyoub         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/push_swap.h"

void    psh_pb(t_var *var)
{
	t_node	*new;

	if (!(A)->be)
		return ;
	new = new_element(A->be->nb);
	lstpop_front('a', var);
	if (!B->be)
	{
		B->be = new;
		B->end = new;
		B->length++;
	}
	else
		lstadd_front('b', var, new);
	ft_putstr("pb"); PRINT
	var->tap++;
}

void    psh_pa(t_var *var)
{
	t_node	*new;

	if (!B->be)
		return ;
	new = new_element(B->be->nb);
	lstpop_front('b', var);
	if (!(A)->be)
	{
		A->be = new;
		A->end = new;
		A->length++;
	}
	else
		lstadd_front('a', var, new);
	ft_putstr("pa"); PRINT
	var->tap++;
}