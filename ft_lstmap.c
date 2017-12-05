/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iporsenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 11:34:03 by iporsenn          #+#    #+#             */
/*   Updated: 2017/11/30 11:34:05 by iporsenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*ret;
	t_list	*first;

	ret = NULL;
	first = NULL;
	while (lst->next != NULL)
	{
		if(!(ret = ft_lstnew(lst, sizeof(lst))))
			return (NULL);
		if(!first)
			first = ret;
		ret = (*f)(lst->content);
		ret = ret->next;
		lst = lst->next;
	}
	return (first);
}
