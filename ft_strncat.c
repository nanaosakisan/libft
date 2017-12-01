/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iporsenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 15:58:45 by iporsenn          #+#    #+#             */
/*   Updated: 2017/11/22 15:58:47 by iporsenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	int		i;
	size_t	j;

	if (ft_strlen(s1) == 0)
	{
		ft_memcpy(s1, s2, n);
		s1[ft_strlen(s2)] = '\0';
	}
	else
	{
		i = ft_strlen(s1);
		j = -1;

		while(s2[++j] && j < n)
		{
			s1[i] = s2[j];
			i++;
		}
		s1[i] = '\0';
	}
	return (s1);
}
