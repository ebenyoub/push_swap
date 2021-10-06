/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mov_swp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebenyoub <ebenyoub@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 16:45:05 by ebenyoub          #+#    #+#             */
/*   Updated: 2021/10/06 15:01:50 by ebenyoub         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	swp_sa(t_var *var)
{
	int	tmp;

	tmp = (var->la->be->nb);
	if (!(var->la)->be || !(var->la)->be->next)
		return ;
	var->la->be->nb = var->la->be->next->nb;
	var->la->be->next->nb = tmp;
	if (!var->flag)
	{
		ft_putstr("sa\n");
		var->tap++;
	}
}

void	swp_sb(t_var *var)
{
	int	tmp;

	tmp = var->lb->be->nb;
	if (!var->lb->be || !var->lb->be->next)
		return ;
	var->lb->be->nb = var->lb->be->next->nb;
	var->lb->be->next->nb = tmp;
	if (!var->flag)
	{
		ft_putstr("sb\n");
		var->tap++;
	}
}

void	swp_ss(t_var *var)
{
	var->flag = TRUE;
	swp_sa(var);
	swp_sb(var);
	var->flag = FALSE;
	ft_putstr("ss\n");
	var->tap++;
}
