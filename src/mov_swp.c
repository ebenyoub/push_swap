/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mov_swp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebenyoub <ebenyoub@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 16:45:05 by ebenyoub          #+#    #+#             */
/*   Updated: 2021/09/14 18:15:53 by ebenyoub         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/push_swap.h"

void    swp_sa(t_var *var)
{
    void    *tmp_data;

    if (!var->lst_a->begin || !var->lst_a->begin->next)
        return ;
    tmp_data = var->lst_a->begin->next->content;
    var->lst_a->begin->next->content = var->lst_a->begin->content;
    var->lst_a->begin->content = tmp_data;
    var->rr ? ft_putstr("sa\n") : 0;
}

void    swp_sb(t_var *var)
{
    void    *tmp_data;

    if (!var->lst_b->begin || !var->lst_b->begin->next)
        return ;
    tmp_data = var->lst_b->begin->next->content;
    var->lst_b->begin->next->content = var->lst_b->begin->content;
    var->lst_b->begin->content = tmp_data;
    var->rr ? ft_putstr("sb\n") : 0;
}

void    swp_ss(t_var *var)
{
    var->rr = false;
    swp_sa(var);
    swp_sb(var);
    var->rr = true;
    ft_putstr("ss\n");
}