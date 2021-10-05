/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mov_rot.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebenyoub <ebenyoub@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 00:12:02 by ebenyoub          #+#    #+#             */
/*   Updated: 2021/10/04 19:48:01 by ebenyoub         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	rot_ra(t_var *var)
{
	int		tmp;

	if (!(A->be) || !(A->be->next))
		return ;
	tmp = A->be->nb;
	lstpop_front('a', var);
	lstadd_back(var, A, tmp);
	if (!F)
	{
		ft_putstr("ra\n");
		var->tap++;
	}
}

void	rot_rb(t_var *var)
{
	int		tmp;

	if (!B->be || !B->be->next)
		return ;
	tmp = B->be->nb;
	lstpop_front('b', var);
	lstadd_back(var, B, tmp);
	if (!F)
	{
		ft_putstr("rb\n");
		var->tap++;
	}
}

void	rot_rr(t_var *var)
{
	F = true;
	rot_ra(var);
	rot_rb(var);
	F = false;
	ft_putstr("rr\n");
	var->tap++;
}

void	q_rot(t_var *var)
{
	if (!Q)
		rot_ra(var);
	else
		rot_rb(var);
}
