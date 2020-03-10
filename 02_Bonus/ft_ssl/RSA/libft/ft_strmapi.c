/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboulara <mboulara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 18:40:57 by mboulara          #+#    #+#             */
/*   Updated: 2019/02/21 18:52:30 by mboulara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*fresh;
	unsigned int	i;

	if (s && f)
	{
		fresh = (char*)malloc(sizeof(char) * ft_strlen(s) + 1);
		i = 0;
		if (fresh)
		{
			while (s[i])
			{
				fresh[i] = f(i, s[i]);
				i++;
			}
			fresh[i] = '\0';
		}
		return (fresh);
	}
	return (0);
}
