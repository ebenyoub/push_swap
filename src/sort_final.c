/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_final.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebenyoub <ebenyoub@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 20:41:06 by ebenyoub          #+#    #+#             */
/*   Updated: 2021/09/28 19:37:53 by ebenyoub         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/push_swap.h"

void    sort_final(t_var *var)
{
    int     i;
    int     n;

    i = B->length - 1;
    while (B->be != NULL)
    {
        var->nb = I[i];
        n = find_nb(0, var);
        sort_push(n, var);
        i--; // PRINT
    }
}