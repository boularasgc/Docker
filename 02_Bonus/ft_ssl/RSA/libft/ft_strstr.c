/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboulara <mboulara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 19:54:42 by mboulara          #+#    #+#             */
/*   Updated: 2019/02/20 08:30:26 by mboulara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int		i;
	int		x;

	if (!s2[0])
		return ((char*)s1);
	i = -1;
	while (s1[++i])
	{
		x = 0;
		while (s1[i + x] == s2[x])
		{
			if (!s2[x + 1])
				return ((char*)&s1[i]);
			x++;
		}
	}
	return (NULL);
}
