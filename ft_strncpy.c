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

char    *ft_strncpy(char *dst, const char *src, size_t len)
{
    size_t i;

    i = 0;
    while(i < len && src[i])
    {
        dst[i] = src[i];
        i++;
    }
    return(dst);
}
