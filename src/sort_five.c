/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebenyoub <ebenyoub@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 15:59:23 by ebenyoub          #+#    #+#             */
/*   Updated: 2021/10/06 16:29:28 by ebenyoub         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	nbr_four(t_var *var)
{
	u_int8_t	i;

	i = FALSE;
	if ((var->lb->be->nb) < (var->la->be->next->nb))
	{
		psh_pa(var);
		if (var->la->be->nb > var->la->be->next->nb)
			swp_sa(var);
	}
	else
	{
		if (var->lb->be->nb < var->la->end->nb)
		{
			rev_rra(var);
			i = TRUE;
		}
		psh_pa(var);
		rot_ra(var);
		if (i)
			rot_ra(var);
	}
}

void	nbr_five_next(t_var *var)
{
	{
		if (var->lb->be->nb < var->la->end->nb)
		{
			rev_rra(var);
			psh_pa(var);
			rot_ra(var);
			rot_ra(var);
		}
		else
		{
			psh_pa(var);
			rot_ra(var);
		}
	}
}

void	nbr_five(t_var *var)
{
	if (var->lb->be->nb < var->la->be->next->nb)
	{
		psh_pa(var);
		if (var->la->be->nb > var->la->be->next->nb)
			swp_sa(var);
	}
	else if (var->lb->be->nb > var->la->end->back->nb)
		nbr_five_next(var);
	else
	{
		rot_ra(var);
		psh_pa(var);
		swp_sa(var);
		rev_rra(var);
	}
}

void	sort_five(t_var *var)
{
	psh_pb(var);
	psh_pb(var);
	sort_three(var);
	nbr_four(var);
	nbr_five(var);
}

void	sort_four(t_var *var)
{
	psh_pb(var);
	sort_three(var);
	nbr_four(var);
}
