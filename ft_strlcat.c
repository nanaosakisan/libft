/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iporsenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 15:57:45 by iporsenn          #+#    #+#             */
/*   Updated: 2017/11/22 15:57:47 by iporsenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	int		j;

	if (size == 0)
		return (ft_strlen(src));
	i = ft_strlen(dst);
	j = 0;
	if (src[j] == '\0')
		return (i);
	if (size < (ft_strlen(src) + i))
		return (ft_strlen(src) + i);
	if (i > size)
		return (ft_strlen(src) + size);
	while (i < size)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	return (i);
}
