/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebenyoub <ebenyoub@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 00:04:23 by ebenyoub          #+#    #+#             */
/*   Updated: 2021/10/04 20:49:03 by ebenyoub         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	main(int argc, char **argv)
{
	t_var	*var;

	var = (t_var *)malloc(sizeof(*var));
	if (!var)
		m_exit(-1, var);
	param_init(argc, argv, var);
	if (S == 1 || is_sorted_lst(A->be))
		m_exit(0, var);
	print_lst(A->be);
	if (S <= 5)
		sort_small(var);
	else
		sort_big(var);
	push_free(var);
	free(var);
	return (0);
}
