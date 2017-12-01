/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iporsenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 19:00:47 by iporsenn          #+#    #+#             */
/*   Updated: 2017/11/24 19:00:50 by iporsenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t 			i;
	size_t 			j;
	unsigned char	*dest;
	unsigned char	*source;

	dest = (unsigned char *)dst;
	source = (unsigned char *)src;
	if (!len)
		return (dest);
	else if (source == dest)
		return (dest);
	else if (source > dest)
	{
		ft_memcpy(dest, source, len);
		return (dest);
	}
	else
	{
		i = ft_strlen(dst);
		j = ft_strlen(src);
		while (i > len)
		{
			dest[i] = source[j];
			i--;
			j--;
		}
		return (dest);
	}
	return (NULL);
}
