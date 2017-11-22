/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iporsenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 15:57:04 by iporsenn          #+#    #+#             */
/*   Updated: 2017/11/22 15:57:06 by iporsenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strdup(const char *s)
{
    char *dest;

    dest = 0;
    if(!(dest = ft_strnew(ft_strlen(s))))
        return(NULL);
    ft_strcpy(dest, s);
    return(dest);
}
