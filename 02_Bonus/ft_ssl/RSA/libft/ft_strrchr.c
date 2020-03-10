/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboulara <mboulara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 18:57:55 by mboulara          #+#    #+#             */
/*   Updated: 2019/02/20 16:27:56 by mboulara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *s1, int c)
{
	int		i;
	int		ctr;

	i = -1;
	ctr = -1;
	while (s1[++i])
		if (s1[i] == (const char)c)
			ctr = i;
	if (c == 0)
		ctr = i;
	if (ctr > -1)
		return ((char*)s1 + ctr);
	else
		return ((char*)0);
}
