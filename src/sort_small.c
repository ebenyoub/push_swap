/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebenyoub <ebenyoub@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 15:06:11 by ebenyoub          #+#    #+#             */
/*   Updated: 2021/10/05 15:16:39 by ebenyoub         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	sort_small(t_var *var)
{
	if (var->la->length == 2)
		sort_two(var);
	if (var->la->length == 3)
		sort_three(var);
	if (var->la->length == 4)
		sort_four(var);
	if (var->la->length == 5)
		sort_five(var);
}
