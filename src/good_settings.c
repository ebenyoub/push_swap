/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   good_settings.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebenyoub <ebenyoub@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 15:02:50 by ebenyoub          #+#    #+#             */
/*   Updated: 2021/08/20 21:09:10 by ebenyoub         ###   ########lyon.fr   */
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
			(!ft_isdigit(argv[a][i])) ? m_exit(1) : 0;
			i++;
		}
		a++;
	}
}

void	param_duplicate(int argc, char **argv)
{
	int	    i;
	int		j;

	j = 0;
	while (argv[j] && j < argc)
	{
		i = 1 + j;
		while (argv[i + 1] && i < argc)
		{
			(!ft_strcmp(argv[i + 1], argv[j + 1])) ? m_exit(2) : 0;
			i++;
		}
		j++;
	}
}

void	param_convert(int argc, char **argv, t_var *var)
{
    int i;
    
    i = 0;
    (!(var->a = malloc(sizeof(int) * (argc - 1)))) ? m_exit(4) : 0;
    while (i < argc - 1)
    {
	var->a[i] = atoi((const char *)argv[i + 1]);
	i++;
    }
}


void	push_checkin(int argc, char **argv)
{
    param_chekin(argc, argv);
    param_duplicate(argc, argv);
}
