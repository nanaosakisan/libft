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

int		main(int ac, char **av)
{
	// char	*str = "the cake is a lie";
	char	buff1[50] = "Toto";
	char	buff2[50] = "buh";
	size_t	max = 5;

	if (!ac || !av)
		return (0);
//	if (argc < 2)
//		return (0);

	printf("1 = %zu\n", strlcat(buff1, buff2, max));
	printf("%s\n", buff1);
	// printf("2 = %zu\n", ft_strlcat(buff2, str, max));
	// printf("%s\n", buff2);
	return (0);
}
