/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebenyoub <ebenyoub@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 00:04:23 by ebenyoub          #+#    #+#             */
/*   Updated: 2021/10/04 14:38:14 by ebenyoub         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/push_swap.h"

int     main(int argc, char **argv)
{
	t_var	*var;

	!(var = (t_var *)malloc(sizeof(t_var))) ? m_exit(-1) : 0;
	param_init(argc, argv, var);
	(S == 1 || is_sorted_lst(A->be)) ? m_exit(0) : 0;
	S <= 5 ? sort_small(var) : sort_big(var);
	free(var);
	push_free(var);
	// fprintf(stderr, "\n%d coups\n", var->tap);
	// is_sorted_lst(A->be) ? printf("sorted\n") : printf("dead\n");
	return (0);
}