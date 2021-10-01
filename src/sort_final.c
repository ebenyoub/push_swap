/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_final.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebenyoub <ebenyoub@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 20:41:06 by ebenyoub          #+#    #+#             */
/*   Updated: 2021/09/30 18:31:35 by ebenyoub         ###   ########lyon.fr   */
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
        // printf("n ==> %d | I[%d] = %d\n", n, i, I[i]);
        sort_push(n, var);
        i--; //PRINT
    }
}