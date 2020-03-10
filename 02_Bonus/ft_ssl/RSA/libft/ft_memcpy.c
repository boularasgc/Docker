/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboulara <mboulara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 19:44:49 by mboulara          #+#    #+#             */
/*   Updated: 2019/03/04 16:57:07 by mboulara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memcpy(void *str1, const void *str2, size_t n)
{
	const char	*csrc;
	char		*cdest;
	int			i;

	csrc = (char *)str2;
	cdest = (char *)str1;
	i = 0;
	while (i < (int)n)
	{
		cdest[i] = csrc[i];
		i++;
	}
	return (cdest);
}
