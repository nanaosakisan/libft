/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iporsenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 15:58:45 by iporsenn          #+#    #+#             */
/*   Updated: 2017/11/22 15:58:47 by iporsenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strncat(char *s1 const char *s2, size_t n)
{
    int i;
    size_t j;

    i = 0;
    j = 0;
    while(dst[i])
    {
        while(j >= n)
        {
            if(dst[i + 1] == '\0')
            {
                dst[i + 1] = src[j];
                j++;
            }
            i++;
        }
    }
    return(dst);
}
