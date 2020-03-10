/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboulara <mboulara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 15:30:00 by mboulara          #+#    #+#             */
/*   Updated: 2019/02/22 12:12:08 by mboulara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int i;

	i = -1;
	while (++i < (int)n)
	{
		if (((unsigned char*)s)[i] == (unsigned char)c)
			return ((void*)s + i);
	}
	return ((void*)0);
}
