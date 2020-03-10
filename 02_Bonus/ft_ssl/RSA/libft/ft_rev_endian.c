/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_endian.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboulara <mboulara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 00:32:14 by mboulara          #+#    #+#             */
/*   Updated: 2020/01/16 08:45:22 by mboulara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

uint8_t				*ft_rev_endian(void *src, size_t size)
{
	int				i;
	uint8_t			*temp;
	uint8_t			*ptr;

	temp = malloc(size);
	ptr = (unsigned char *)src;
	size -= 1;
	i = 0;
	while ((int)--size <= 0)
		temp[size--] = ptr[i++];
	return (temp);
}
