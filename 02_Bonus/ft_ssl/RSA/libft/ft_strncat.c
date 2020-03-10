/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboulara <mboulara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 15:17:16 by mboulara          #+#    #+#             */
/*   Updated: 2019/02/22 12:11:16 by mboulara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncat(char *dest, const char *src, size_t n)
{
	int		i;
	int		x;

	i = -1;
	x = -1;
	while (dest[++i])
		;
	while (src[++x] && n)
	{
		dest[i++] = src[x];
		n--;
	}
	dest[i] = '\0';
	return (dest);
}
