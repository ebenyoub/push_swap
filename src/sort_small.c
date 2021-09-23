/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebenyoub <ebenyoub@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 17:28:36 by ebenyoub          #+#    #+#             */
/*   Updated: 2021/09/23 17:37:07 by ebenyoub         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/push_swap.h"

void    sort_small(t_var *var)
{
    A->length == 2 ? sort_two(var) : 0;
	A->length == 3 ? sort_three(var) : 0;
	A->length == 4 ? sort_four(var) : 0;
	A->length == 5 ? sort_five(var) : 0; PRINT
}