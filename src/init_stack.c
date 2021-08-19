/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebenyoub <ebenyoub@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 16:41:39 by ebenyoub          #+#    #+#             */
/*   Updated: 2021/08/19 19:53:14 by ebenyoub         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/push_swap.h"

void    init_stack(t_stack *sta, int argc, char **argv)
{
    int i;

    i = 0;
    if ((!(sta->a = malloc(sizeof(int) * argc)) ||
        (!(sta->b = malloc(sizeof(int) * argc)))))
    {
        ft_putstr("Error : malloc() in init_stack().\n");
        exit (EXIT_FAILURE);
    }
    while (argv[i + 1] && i < argc)
    {
        sta->a[i] = ft_atoi((const char *)argv[i + 1]);
        i++;
    }
}