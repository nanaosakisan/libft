/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iporsenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 18:44:18 by iporsenn          #+#    #+#             */
/*   Updated: 2017/11/24 18:44:25 by iporsenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char		*dest;
	const char	*source;

	dest = dst;
	source = src;
	while (n > 0)
	{
		if ((*dest++ = *source++) == c)
			return (dest);
		n--;
	}
	return (NULL);
}
