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
#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t 			i;
	size_t 			j;
	unsigned char	*dest;
	unsigned char	*source;

	dest = (unsigned char *)dst;
	source = (unsigned char *)src;
	if (!len || src == dst)
		return (dest);
	else if (src > dst)
	{
		ft_memcpy(dest, source, len);
		return (dest);
	}
	else
	{
		i = ft_strlen((const char *)dst);
		j = ft_strlen((const char *)src);
		printf("i = %zu\n", i);
		printf("j = %zu\n", j);
		while (i > len)
		{
			dest[i] = source[j];
			i--;
			j--;;
		}
		return (dest);
	}
	return (NULL);
}
