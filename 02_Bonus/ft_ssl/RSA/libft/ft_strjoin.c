/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboulara <mboulara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/22 15:50:26 by mboulara          #+#    #+#             */
/*   Updated: 2019/03/05 15:23:48 by mboulara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*fresh;
	size_t	s1len;
	size_t	s2len;

	if (s1 && s2)
	{
		s1len = ft_strlen(s1);
		s2len = ft_strlen(s2);
		fresh = ft_strnew(s1len + s2len);
		if (fresh)
			return (ft_strcat(ft_strcpy(fresh, s1), s2));
	}
	return (NULL);
}
