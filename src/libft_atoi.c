/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_atoi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebenyoub <ebenyoub@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 00:42:56 by ebenyoub          #+#    #+#             */
/*   Updated: 2021/10/04 18:38:14 by ebenyoub         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */


#include "../inc/push_swap.h"

int             ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}     

int		ft_atoi(const char *str, t_var *var)
{
	long		i;
	long		sign;
	long		result;

	i = 0;
	sign = 1;
	result = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == ' '))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			sign *= -1;
	}
	while (ft_isdigit(str[i]) == 1)
	{
		result = result * 10 + (str[i] - 48);
		if (result > INT_MAX || result < INT_MIN)
			m_exit(-1, var);
		i++;
	}
	return (result * sign);
}
