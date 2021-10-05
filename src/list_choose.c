/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_choose.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebenyoub <ebenyoub@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 18:41:06 by ebenyoub          #+#    #+#             */
/*   Updated: 2021/10/04 21:05:01 by ebenyoub         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

t_list  *a_or_b(char c, t_var *var)
{
    if (c == 'a')
        return (A);
    return (B);
}

t_node  *q_a_or_b(char start, t_var *var)
{
    if (start == 'b')
    {
        if (Q)
            return (B->be);
        else
            return (A->be);
    }
    else
    {
        if (Q)
            return (B->end);
        else if (start == 'e')
            return (A->end);
    }
    return (NULL);
}

int     lena_or_lenb(t_var *var)
{
    if (Q)
        return (B->length);
    return (A->length);
}