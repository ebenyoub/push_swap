/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlcpy.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ebenyoub <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/09 09:57:49 by ebenyoub     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/09 17:55:14 by ebenyoub    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	srclen;

	if (dst && src)
	{
		srclen = ft_strlen(src);
		if (srclen < size)
			ft_memcpy(dst, src, srclen + 1);
		else if (size != 0)
		{
			ft_memcpy(dst, src, size - 1);
			dst[size - 1] = '\0';
		}
		return (srclen);
	}
	return (0);
}
