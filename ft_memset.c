/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iporsenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 18:17:35 by iporsenn          #+#    #+#             */
/*   Updated: 2017/11/24 18:18:09 by iporsenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	int		*ptr;

	i = 0;
	ptr = (int *)b;
	if (!b || !c || !len)
		return (NULL);
	while (i <= len && ptr)
	{
		ptr[i] = c;
		i++;
	}
	return (b);
}
