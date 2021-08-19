/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlcat.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ebenyoub <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/09 14:26:35 by ebenyoub     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/09 17:56:04 by ebenyoub    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned	int x;
	unsigned	int	y;
	unsigned	int	len;

	len = 0;
	x = 0;
	y = 0;
	while (dst[x])
		x++;
	len = ft_strlen(dst);
	if (size > len + 1)
	{
		while (src[y] && y < (size - len - 1))
		{
			dst[x] = src[y];
			x++;
			y++;
		}
		dst[x] = '\0';
	}
	if (size < len)
		return (ft_strlen(src) + size);
	return (ft_strlen(src) + len);
}
