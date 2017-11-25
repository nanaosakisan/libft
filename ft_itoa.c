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

char	*ft_reverse_str(char *src)
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

	i = 0;
	if (!(ret = ft_strnew(11)))
		return (NULL);
	if (n < 0)
	{
		ret[i] = 45;
		n = n * -1;
		i++;
	}
	if (n < 10)
		ret[i] = n + 48;
	if (n >= 10)
	{
		while (n != 0)
		{
			ret[i] = n % 10 + 48;
			n = n / 10;
			i++;
		}
	}
	return (ft_reverse_str(ret));
}
