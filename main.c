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
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int		main(int ac, char **av)
{
		char	*src = "this is a good nyancat !\r\n";
		char	dst1[50];
		char	dst2[50];
		int		size = 25;

	if (!ac || !av)
		return (0);
//	if (argc < 2)
//		return (0);
	ft_putstr(memmove(dst1, src, size));
	ft_putchar('\n');
	ft_putstr(ft_memmove(dst2, src, size));
	return (0);
}
