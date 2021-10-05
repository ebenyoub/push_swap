/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_choose.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebenyoub <ebenyoub@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 18:41:06 by ebenyoub          #+#    #+#             */
/*   Updated: 2021/10/05 15:19:29 by ebenyoub         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

t_list	*a_or_b(char c, t_var *var)
{
	if (c == 'a')
		return (var->la);
	return (var->lb);
}

t_node	*q_a_or_b(char start, t_var *var)
{
	if (start == 'b')
	{
		if (var->alt)
			return (var->lb->be);
		else
			return (var->la->be);
	}
	else
	{
		if (var->alt)
			return (var->lb->end);
		else if (start == 'e')
			return (var->la->end);
	}
	return (NULL);
}

int	lena_or_lenb(t_var *var)
{
	if (var->alt)
		return (var->lb->length);
	return (var->la->length);
}
