/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_urandom.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboulara <mboulara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 19:45:01 by mboulara          #+#    #+#             */
/*   Updated: 2019/11/24 18:26:43 by mboulara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_urandom(void *p, size_t size)
{
	int f;

	f = open("/dev/urandom", O_RDONLY);
	read(f, p, size);
	close(f);
	return (p);
}
