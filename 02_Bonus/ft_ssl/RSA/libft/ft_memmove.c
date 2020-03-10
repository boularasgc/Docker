/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboulara <mboulara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 13:28:52 by mboulara          #+#    #+#             */
/*   Updated: 2019/02/20 16:28:31 by mboulara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = -1;
	if (dest < src)
	{
		while (++i < n)
			((unsigned char*)dest)[i] = ((unsigned char*)src)[i];
	}
	else
		while (n--)
			((unsigned char*)dest)[n] = ((unsigned char*)src)[n];
	return (dest);
}
