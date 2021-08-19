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
	t_stack		*stack;

	stack = NULL;
	if (!(stack = malloc(sizeof(stack))))
	{
		ft_putstr("Error : probleme allocation dynamique.\n");
		exit (EXIT_FAILURE);
	}
	param_chekin(argc, argv);
	if (!(param_duplicate(argc, argv)))
		exit (EXIT_FAILURE);
	init_stack(stack, argc, argv);
	list = create_list(argc, argv);
	print_list(&list);
	return (0);
}
