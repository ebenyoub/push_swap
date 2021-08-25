/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebenyoub <ebenyoub@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 19:29:06 by ebenyoub          #+#    #+#             */
/*   Updated: 2021/07/28 14:51:20 by ebenyoub         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int     main(int argc, char **argv)
{
	t_list		*list;
	t_var		*var;

	!(var = malloc(sizeof(var))) ? exit(4) : 0;
	param_convert(argc, argv, var);
	push_checkin(argc, argv);
	list = create_list(argc, var);
	print_list(&list);
	return (0);
}
