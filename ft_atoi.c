/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iporsenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 14:16:50 by iporsenn          #+#    #+#             */
/*   Updated: 2017/11/24 14:16:57 by iporsenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int		ft_atoi(const char *str)
{
	int i;
	int ret;
	int neg;

	i = 0;
	ret = 0;
	neg = 0;
	while (str[i])
	{
		if ((str[i] < '+' && str[i] > '+') || (str[i] < '-' && str[i] > '-')
			|| (str[i] <= 47 && str[i] >= 58))
			return (0);
		while (str[i] == '\n' || str[i] == '\t' || str[i] == '\f'
			|| str[i] == '\r' || str[i] == '\v' || str[i] == ' ')
				i++;
		while ((str[i] >= '0' && str[i] <= '9') || str[i] == '-' || str[i] == '+')
		{
			if ((str[i] == '+' || str[i] == '-') && (str[i + 1] < '0' ||  str[i + 1] > '9'))
				return (0);
			if (str[i] == '-')
				neg = 1;
			ret = (ret * 10) + (str[i] - 48);
			i++;
		}
		if (neg == 1)
			return (ret * -1);
		return (ret);
	}
	return (0);
}
