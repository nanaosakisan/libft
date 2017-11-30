/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iporsenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 16:01:13 by iporsenn          #+#    #+#             */
/*   Updated: 2017/11/22 16:01:15 by iporsenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		main(void)
{
	char	*src = "stars";
	char	dst[50];
	size_t	max = 20;

//	if (argc < 2)
//		return (0);
	ft_putstr(strncpy(dst, src, max));
	ft_putchar('\n');
	ft_putstr(ft_strncpy(dst, src, max));
	return (0);
}
