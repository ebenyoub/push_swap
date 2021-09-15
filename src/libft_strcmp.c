/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_strcmp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebenyoub <ebenyoub@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 17:06:20 by ebenyoub          #+#    #+#             */
/*   Updated: 2021/09/01 18:10:51 by ebenyoub         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	int				i;

	i = 0;
	d = (unsigned char *)s1;
	s = (unsigned char *)s2;
	while ((d[i] || s[i]) && (n-- > 0))
	{
		if (d[i] != s[i])
			return (d[i] - s[i]);
		else
			i++;
	}
	return (0);
}

int		ft_strcmp(char *s1, char *s2)
{
	unsigned char	*d;
	unsigned char	*s;
	int				i;

	i = 0;
	d = (unsigned char *)s1;
	s = (unsigned char *)s2;
	while (d[i] || s[i])
	{
		if (d[i] != s[i])
			return (d[i] - s[i]);
		else
			i++;
	}
	return (0);
}
