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
	size_t	i;
	int		*ptr;

	i = 0;
	ptr = NULL;
	ptr = (int *)src;
	if (!dst || !src || !c || !n)
		return (NULL);
	while (dst && ptr && i <= n)
	{
		if (ptr[i] == c)
			return (dst + (i + 1));
		((unsigned char *)dst)[i] = ((unsigned char *)ptr)[i];
		i++;
	}
	return (NULL);
}
