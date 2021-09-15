/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_atoi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebenyoub <ebenyoub@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 00:42:56 by ebenyoub          #+#    #+#             */
/*   Updated: 2021/09/02 17:41:46 by ebenyoub         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */


#include "../inc/push_swap.h"

int             ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
			return (1);
	return (0);	
}     

int		ft_atoi(const char *str)
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
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (ft_isdigit(str[i]) == 1)
	{
		result = result * 10 + (str[i] - 48);
		result > INT_MAX || result < INT_MIN ? m_exit() : 0;
		i++;
	}
	return (result * sign);
}
