/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboulara <mboulara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/01 10:44:00 by mboulara          #+#    #+#             */
/*   Updated: 2019/03/01 10:48:03 by mboulara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *new;
	t_list *buff;

	if (!lst || !f)
		return (lst);
	new = f(lst);
	buff = new;
	while (lst->next != 0)
	{
		lst = lst->next;
		buff->next = f(lst);
		buff = buff->next;
	}
	return (new);
}
