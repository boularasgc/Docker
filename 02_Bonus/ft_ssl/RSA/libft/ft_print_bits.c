/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_bits.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboulara <mboulara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 11:47:13 by mboulara          #+#    #+#             */
/*   Updated: 2019/11/27 11:50:51 by mboulara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				ft_print_bits(void const *ptr, size_t const ptr_byte_sz)
{
	unsigned char	*bytes;
	unsigned char	one_byte;
	int				i;
	int				j;

	bytes = (unsigned char*)ptr;
	i = ptr_byte_sz;
	while (--i >= 0)
	{
		j = 8;
		while (--j >= 0)
		{
			one_byte = (bytes[i] >> j) & 1;
			ft_printf("%u", one_byte);
		}
		if ((size_t)i == ptr_byte_sz - 1)
			ft_printf(" Higher Byte");
		if ((size_t)i == 0)
			ft_printf(" Lower Byte");
		write(1, "\n", 1);
	}
}
