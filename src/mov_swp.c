/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mov_swp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebenyoub <ebenyoub@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 16:45:05 by ebenyoub          #+#    #+#             */
/*   Updated: 2021/09/20 15:07:56 by ebenyoub         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/push_swap.h"

void    swp_sa(t_var *var)
{
    int     tmp;

    tmp = A->be->nb;
    if (!A->be || !A->be->next)
        return ;
    A->be->nb = A->be->next->nb;
    A->be->next->nb = tmp;
    !F ? ft_putstr("sa\n") : 0;
	print_lst(A->be);
	print_lst(B->be);
}

void    swp_sb(t_var *var)
{
    int     tmp;

    tmp = B->be->nb;
    if (!B->be || !B->be->next)
        return ;
    B->be->nb = B->be->next->nb;
    B->be->next->nb = tmp;
    !F ? ft_putstr("sb\n") : 0;
	print_lst(A->be);
	print_lst(B->be);
}

void    swp_ss(t_var *var)
{
    F = true;
    swp_sa(var);
    swp_sb(var);
    F = false;
    ft_putstr("ss\n");
}