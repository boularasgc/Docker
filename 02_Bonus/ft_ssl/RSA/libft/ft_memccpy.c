/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboulara <mboulara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 09:09:19 by mboulara          #+#    #+#             */
/*   Updated: 2019/12/31 08:45:04 by mboulara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*csrc;
	unsigned char	*cdest;
	int				i;

	csrc = (unsigned char *)src;
	cdest = (unsigned char *)dest;
	i = -1;
	while (++i < (int)n)
	{
		if ((cdest[i] = csrc[i]) == (unsigned char)c)
			return (cdest + i + 1);
	}
	return (NULL);
}

/*
** The ft_memccpy() function copies bytes from string src to string dst.  If the
** character c (as converted to an unsigned char) occurs in the string src,
** the copy stops and a pointer to the byte after the copy of c in the string
** dst is returned.Otherwise, n bytes are copied, and a NULL pointer is
** returned.
*/
