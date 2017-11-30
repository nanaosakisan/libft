/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iporsenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 11:33:28 by iporsenn          #+#    #+#             */
/*   Updated: 2017/11/30 11:33:31 by iporsenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	while ((*alst)->next != NULL)
	{
		(*del)(*alst, (*alst)->content_size);
		free((void **)alst);
		(*alst) = (*alst)->next;
	}
	*alst = NULL;
}
