/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboulara <mboulara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 17:16:13 by mboulara          #+#    #+#             */
/*   Updated: 2019/04/22 19:02:02 by mboulara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_strlen(const char *s)
{
	size_t		len;
	unsigned	x;

	len = 0;
	while (1)
	{
		x = *(unsigned*)s;
		if ((x & 0xFF) == 0)
			return (len);
		if ((x & 0xFF00) == 0)
			return (len + 1);
		if ((x & 0xFF0000) == 0)
			return (len + 2);
		if ((x & 0xFF000000) == 0)
			return (len + 3);
		s += 4;
		len += 4;
	}
}
