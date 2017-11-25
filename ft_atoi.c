/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iporsenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 12:20:46 by iporsenn          #+#    #+#             */
/*   Updated: 2017/11/25 12:20:50 by iporsenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		atoi2(const char *str)
{
	int i;
	int neg;
	int ret;

	i = 0;
	neg = 1;
	ret = 0;
	if (str[i] == '\t' || str[i] == '\v' || str[i] == '\f' || str[i] == '\r'
		|| str[i] == '\n' || str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			neg = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		ret = (ret * 10) + (str[i] - 48);
		i++;
	}
	return (ret * neg);
}
