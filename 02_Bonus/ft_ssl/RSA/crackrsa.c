/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   crackrsa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboulara <mboulara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 01:40:08 by mboulara          #+#    #+#             */
/*   Updated: 2020/01/29 02:32:08 by mboulara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rsa.h"
#include <math.h>

void		prime_factors(size_t n)
{
	size_t	i;
	size_t	sr;

	sr = sqrt(n);
	while (n % 2 == 0)
	{
		ft_printf("%d ", 2);
		n = n / 2;
	}
	i = 3;
	while (i <= sr)
	{
		while (n % i == 0)
		{
			ft_printf("%zu \n", i);
			n = n / i;
		}
		i = i + 2;
	}
	if (n > 2)
		ft_printf("%zu \n", n);
}

/*
** 22 - 26 Print the number of 2s that divide n
** 28 - 36 n must be odd at this point.  So we can skip
** one element (Note i = i +2)
** 30 - 34 While i divides n, print i and divide n
** 37 - 38 This condition is to handle the case when n
** is a prime number greater than 2
*/
