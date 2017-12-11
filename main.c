/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iporsenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/11 16:46:19 by iporsenn          #+#    #+#             */
/*   Updated: 2017/12/11 16:46:23 by iporsenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(int argc, char **argv)
{
	char	dest[10] = "a";
	if (!argc || !argv)
		return (0);
	else
	{
		ft_putstr(strncat(dest, "lorem ipsum", 10));
		ft_putchar('\n');
	}
	return (0);
}
