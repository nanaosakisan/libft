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
	size_t i;
	size_t j;

	if (src == dst)
		return (dst);
	else if (src >= dst)
		ft_memcpy(dst, src, len);
	else
	{
		i = ft_strlen(dst);
		j = ft_strlen(src);
		while (dst && src && i != len)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[j];
			i--;
			j--;
		}
	}
	return (dst);
}
