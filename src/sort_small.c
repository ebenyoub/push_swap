/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebenyoub <ebenyoub@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 15:06:11 by ebenyoub          #+#    #+#             */
/*   Updated: 2021/10/05 15:06:18 by ebenyoub         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	sort_small(t_var *var)
{
	if (A->length == 2)
		sort_two(var);
	if (A->length == 3)
		sort_three(var);
	if (A->length == 4)
		sort_four(var);
	if (A->length == 5)
		sort_five(var);
}
