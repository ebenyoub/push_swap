/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_exit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebenyoub <ebenyoub@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 00:26:18 by ebenyoub          #+#    #+#             */
/*   Updated: 2021/10/04 17:08:20 by ebenyoub         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void    free_tab(int **tab, t_var *var)
{
    int     i;

    i = 0;
    while (i < P + (H ? 1 : 0))
    {
        tab[i] ? free(tab[i]) : 0;
        i++;
    }
    tab ? free(tab) : 0;
}

void    push_free(t_var *var)
{
    free_list(var);
	free_tab(K, var);
	T ? free(T) : 0;
    I ? free(I) : 0;
}

void    m_exit(int err, t_var *var)
{
    err == -1 ? ft_putstr("Error\n") : 0;
    push_free(var);
    exit (EXIT_FAILURE);
}
