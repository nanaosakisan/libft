/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iporsenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 12:00:45 by iporsenn          #+#    #+#             */
/*   Updated: 2017/11/25 12:00:47 by iporsenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;

	i = 0;
	while (s1 && s2 && i < n)
	{
		if (((unsigned char *)s1)[i] > ((unsigned char *)s2)[i])
			return ((s1 + i) - (s2 + i));
		i++;
	}
	return ((s1 + i) - (s2 + i));
}
