/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mov_rot.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebenyoub <ebenyoub@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 00:12:02 by ebenyoub          #+#    #+#             */
/*   Updated: 2021/09/15 01:25:00 by ebenyoub         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/push_swap.h"

void    rot_ra(t_var *var)
{
	void	*tmp;

	if (!var->lst_a->begin || !var->lst_a->begin->next)
		return ;
	tmp = var->lst_a->begin->content;
	lstpop_front(var->lst_a);
    lstadd_back(var->lst_a, tmp);
	var->rr ? ft_putstr("ra\n") : 0;
}

void    rot_rb(t_var *var)
{
	void	*tmp;

	if (!var->lst_b->begin || !var->lst_b->begin->next)
		return ;
	tmp = var->lst_b->begin->content;
	lstpop_front(var->lst_b);
    lstadd_back(var->lst_b, tmp);
	var->rr ? ft_putstr("rb\n") : 0;
}

void    rot_rr(t_var *var)
{
	var->rr = false;
    rot_ra(var);
    rot_rb(var);
	var->rr = true;
    ft_putstr("rr\n");
}