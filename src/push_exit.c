/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_exit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebenyoub <ebenyoub@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 00:26:18 by ebenyoub          #+#    #+#             */
/*   Updated: 2021/10/02 18:57:43 by ebenyoub         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void    free_tab(int **tab, t_var *var)
{
    int     i;

    i = 0;

    while (i < P + 1)
        free(tab[i++]);
    free(tab);
}

void    push_free(t_var *var)
{
    var ? free(var) : 0;
}

void    m_exit(int err)
{
    err == -1 ? ft_putstr("Error\n") : 0;
    exit (EXIT_FAILURE);
}
