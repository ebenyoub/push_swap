/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mov_rot.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebenyoub <ebenyoub@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 00:12:02 by ebenyoub          #+#    #+#             */
/*   Updated: 2021/10/05 15:19:29 by ebenyoub         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	rot_ra(t_var *var)
{
	int		tmp;

	if (!(var->la->be) || !(var->la->be->next))
		return ;
	tmp = var->la->be->nb;
	lstpop_front('a', var);
	lstadd_back(var, var->la, tmp);
	if (!var->flag)
	{
		ft_putstr("ra\n");
		var->tap++;
	}
}

void	rot_rb(t_var *var)
{
	int		tmp;

	if (!var->lb->be || !var->lb->be->next)
		return ;
	tmp = var->lb->be->nb;
	lstpop_front('b', var);
	lstadd_back(var, var->lb, tmp);
	if (!var->flag)
	{
		ft_putstr("rb\n");
		var->tap++;
	}
}

void	rot_rr(t_var *var)
{
	var->flag = true;
	rot_ra(var);
	rot_rb(var);
	var->flag = false;
	ft_putstr("rr\n");
	var->tap++;
}

void	q_rot(t_var *var)
{
	if (!var->alt)
		rot_ra(var);
	else
		rot_rb(var);
}
