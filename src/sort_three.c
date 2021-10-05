/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebenyoub <ebenyoub@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 15:32:15 by ebenyoub          #+#    #+#             */
/*   Updated: 2021/10/05 15:16:39 by ebenyoub         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	sort_apply_next(t_var *var)
{
	if (var->la->be->nb > var->la->be->next->nb
		&& var->la->be->nb > var->la->end->nb
		&& var->la->be->next->nb > var->la->end->nb)
	{
		swp_sa(var);
		rev_rra(var);
	}
	if (var->la->be->nb < var->la->be->next->nb
		&& var->la->be->nb < var->la->end->nb
		&& var->la->be->next->nb > var->la->end->nb)
	{
		swp_sa(var);
		rot_ra(var);
	}
}

void	sort_three(t_var *var)
{
	if ((var->la->be->nb) > (var->la->be->next->nb)
		&& var->la->be->nb < var->la->end->nb
		&& var->la->be->next->nb < var->la->end->nb)
		swp_sa(var);
	if ((var->la->be->nb > var->la->be->next->nb)
		&& (var->la->be->nb > var->la->end->nb)
		&& (var->la->be->next->nb < var->la->end->nb))
		rot_ra(var);
	if ((var->la->be->nb < var->la->be->next->nb)
		&& (var->la->be->nb > var->la->end->nb)
		&& (var->la->be->next->nb > var->la->end->nb))
		rev_rra(var);
	sort_apply_next(var);
}

void	sort_two(t_var *var)
{
	if (var->la->be->nb > var->la->be->next->nb)
		swp_sa(var);
}
