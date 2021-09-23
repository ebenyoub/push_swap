/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebenyoub <ebenyoub@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 00:04:23 by ebenyoub          #+#    #+#             */
/*   Updated: 2021/09/23 17:47:19 by ebenyoub         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/push_swap.h"

int     main(int argc, char **argv)
{
	t_var	*var;

	var = NULL;
	param_init(&argc, argv, &var);
	A = make_list(argc, var);
	B = new_list(); PRINT
	find_median(var);
	if (A->length == 1 || is_sorted_lst(A->be))
		return (0);
	sort_small(var);
	return (0);
}