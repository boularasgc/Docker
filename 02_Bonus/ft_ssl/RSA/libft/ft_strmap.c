/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboulara <mboulara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 16:09:50 by mboulara          #+#    #+#             */
/*   Updated: 2019/02/21 18:53:15 by mboulara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
{
	char	*fresh;
	int		i;

	if (s && f)
	{
		fresh = (char*)malloc(sizeof(char) * ft_strlen(s) + 1);
		i = -1;
		if (fresh)
		{
			while (s[++i])
				fresh[i] = f(s[i]);
			fresh[i] = '\0';
		}
		return (fresh);
	}
	return (0);
}
