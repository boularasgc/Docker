/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboulara <mboulara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 19:47:23 by mboulara          #+#    #+#             */
/*   Updated: 2019/02/27 16:50:52 by mboulara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t		num_len(int n)
{
	size_t			cnt;
	unsigned	int	cpyn;

	cnt = 1;
	if (n < 0)
	{
		cpyn = n * -1;
		cnt++;
	}
	else
		cpyn = n;
	while (cpyn >= 10)
	{
		cpyn = cpyn / 10;
		cnt++;
	}
	return (cnt);
}

char				*ft_itoa(int n)
{
	char			*itoa;
	size_t			nlen;
	unsigned int	cpyn;

	nlen = num_len(n);
	if (!(itoa = (char*)malloc(nlen + 1)))
		return (0);
	itoa[nlen] = '\0';
	if (n < 0)
	{
		cpyn = n * -1;
		itoa[0] = '-';
	}
	else
		cpyn = n;
	while (cpyn >= 10)
	{
		itoa[--nlen] = cpyn % 10 + '0';
		cpyn = cpyn / 10;
	}
	itoa[--nlen] = cpyn % 10 + '0';
	return (itoa);
}
