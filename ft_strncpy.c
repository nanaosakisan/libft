/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iporsenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 15:59:12 by iporsenn          #+#    #+#             */
/*   Updated: 2017/11/22 15:59:14 by iporsenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strncpy(char *dest, const char *src, size_t n)
{
    size_t i;

    i = 0;
    while(i < n && src[i])
    {
        dest[i] = src[i];
        i++;
    }
    return(dest);
}
