/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebenyoub <ebenyoub@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 00:04:23 by ebenyoub          #+#    #+#             */
/*   Updated: 2021/09/20 15:04:29 by ebenyoub         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/push_swap.h"

int     main(int argc, char **argv)
{
	t_var	*var;

	var = NULL;
	param_init(&argc, argv, &var);
	A = make_list(argc, var->tab);
	B = new_list();
	print_lst(A->be);
	A->length == 3 ? sort_three(var) : 0;
	A->length == 5 ? sort_five(var) : 0;
	return (0);
}