/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebenyoub <ebenyoub@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 15:32:15 by ebenyoub          #+#    #+#             */
/*   Updated: 2021/09/19 16:59:46 by ebenyoub         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/push_swap.h"

void    sort_apply(t_var *var, int *n)
{
    int     a;
    int     b;
    int     c;

    a = n[0];
    b = n[1];
    c = n[2];
    a > b && a < c && b < c ? swp_sa(var) : 0;
    a > b && a > c && b < c ? rot_ra(var) : 0;
    a < b && a > c && b > c ? rev_rra(var) : 0;
    a > b && a > c && b > c ? swp_sa(var) : 0;
    a > b && a > c && b > c ? rev_rra(var) : 0;
    a < b && a < c && b > c ? swp_sa(var) : 0;
    a < b && a < c && b > c ? rot_ra(var) : 0;
}

void    sort_three(t_var *var)
{
    t_node  *lst;
    int     a[3];
    int     i;
    int     *ptr;

    i = 0;
    lst = var->lst_a->begin;
    while (i < 3)
    {
        ptr = lst->content;
        a[i] = *ptr;
        lst = lst->next;
        i++;
    }
    sort_apply(var, a);
}