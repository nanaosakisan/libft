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

void	*fr_memccpy(void *dst, const void *src, int c, size_t n)
{
	int i;

	i = 0;
	if (!dst || !src || !c || !n)
		return (NULL);
	while (dest[i] && src[i] && i <= n)
	{
		if (src[i] == c)
			return (dest[i + 1]);
		dest[i] = src[i];
		i++;
	}
	return (NULL);
}
