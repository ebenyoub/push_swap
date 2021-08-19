/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   good_settings.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebenyoub <ebenyoub@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 15:02:50 by ebenyoub          #+#    #+#             */
/*   Updated: 2021/08/19 19:37:03 by ebenyoub         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/push_swap.h"

void     param_chekin(int argc, char **argv)
{
	int a;
	int i;

	a = 1;
	while (a < argc)
	{
		i = 0;
		if (argv[a][i] == '-')
			i++;
		while (argv[a][i])
		{
			if (!ft_isdigit(argv[a][i]))
			{
				ft_putstr("Error : parameters must be integers.\n");
				exit (EXIT_FAILURE);
			}
			i++;
		}
		a++;
	}
}

int	param_duplicate(int argc, char **argv)
{
	int	    i;
	int		j;

	j = 0;
	while (argv[j] && j < argc)
	{
		i = 1 + j;
		while (argv[i + 1] && i < argc)
		{
			if (ft_strcmp(argv[i + 1], argv[j + 1]) == 0)
			{
				ft_putstr("La liste comporte des doublons.\n");
				exit (EXIT_FAILURE);
			}
			i++;
		}
		j++;
	}
	return (1);
}
