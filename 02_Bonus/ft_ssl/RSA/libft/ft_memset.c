/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboulara <mboulara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 15:55:58 by mboulara          #+#    #+#             */
/*   Updated: 2019/02/20 16:28:11 by mboulara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str1, int c, size_t n)
{
	unsigned char *dest;

	dest = str1;
	while (n > 0)
	{
		*dest = (unsigned char)c;
		dest++;
		n--;
	}
	return (str1);
}
