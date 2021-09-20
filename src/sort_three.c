/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebenyoub <ebenyoub@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 15:32:15 by ebenyoub          #+#    #+#             */
/*   Updated: 2021/09/21 00:09:30 by ebenyoub         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/push_swap.h"

void    sort_apply_next(t_var *var)
{
    if (A->be->nb > A->be->next->nb 
        && A->be->nb > A->end->nb
        && A->be->next->nb > A->end->nb)
    {
        swp_sa(var);
        rev_rra(var);
    }
    if (A->be->nb < A->be->next->nb 
        && A->be->nb < A->end->nb
        && A->be->next->nb > A->end->nb)
    {
        swp_sa(var);
        rot_ra(var);
    }
}

void    sort_three(t_var *var)
{
    if (A->be->nb > A->be->next->nb 
        && A->be->nb < A->end->nb
        && A->be->next->nb < A->end->nb)
        swp_sa(var);
    if (A->be->nb > A->be->next->nb 
        && A->be->nb > A->end->nb
        && A->be->next->nb < A->end->nb)
        rot_ra(var);
    if (A->be->nb < A->be->next->nb 
        && A->be->nb > A->end->nb
        && A->be->next->nb > A->end->nb)
        rev_rra(var);
        sort_apply_next(var);
}

void    sort_two(t_var *var)
{
    A->be->nb > A->be->next->nb ? swp_sa(var) : 0;
}