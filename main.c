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
	char dst[] = "abcdefghijklmnopqrstuvwxyz";
	const char src[] = "string with\200inside !";
//	size_t n;

//	n = 21;
//	if (argc < 2)
//		return (0);
	printf("%s\n", src);
	printf("%s\n", memccpy(dst, src, 0600, 21));
	printf("%s\n", ft_memccpy(dst, src, 0600, 21));
	return (0);
}
