/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iporsenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 15:52:13 by iporsenn          #+#    #+#             */
/*   Updated: 2017/11/25 15:52:16 by iporsenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_reverse_str(char *src)
{
	char	*dst;
	int		len;
	int		i;

	len = ft_strlen(src);
	i = 0;
	if (!(dst = ft_strnew(len)))
		return (NULL);
	if (src[0] == '-')
	{
		dst[i] = '-';
		i++;
	}
	--len;
	while (src[len] && src[len] != '-')
	{
		dst[i] = src[len];
		len--;
		i++;
	}
	return (dst);
}

char	*ft_itoa(int n)
{
	char	*ret;
	int		i;
	long	num;

	i = 0;
	num = (long)n;
	if (!(ret = ft_strnew(11)))
		return (NULL);
	if (num < 0)
	{
		ret[i] = 45;
		num = num * -1;
		i++;
	}
	if (num < 10)
		ret[i] = n + 48;
	if (num >= 10)
	{
		while (num != 0)
		{
			ret[i] = num % 10 + 48;
			num = num / 10;
			i++;
		}
	}
	return (ft_reverse_str(ret));
}
