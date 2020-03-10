/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboulara <mboulara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 10:27:53 by mboulara          #+#    #+#             */
/*   Updated: 2019/02/20 10:37:52 by mboulara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	int		i;
	int		x;

	if (!s2[0])
		return ((char*)s1);
	i = -1;
	while (s1[++i] && i < (int)n)
	{
		x = 0;
		while (s1[i + x] == s2[x] && i + x < (int)n)
		{
			if (!s2[x + 1])
				return ((char*)s1 + i);
			x++;
		}
	}
	return (0);
}
