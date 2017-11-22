/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iporsenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 15:57:45 by iporsenn          #+#    #+#             */
/*   Updated: 2017/11/22 15:57:47 by iporsenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t    ft_strlcat(char *dst, const char *src, size_t size)
{
    int i;
    size_t j;

    i = 0;
    j = 0;
    while(dst[i])
    {
        if(dst[i + 1] == '\0')
        {
            dst[i + 1] = src[j];
            j++;
        }
        i++;
        return(ft_strlen(dst) + j);
    }
    return(ft_strlen(dst) + size);
}
