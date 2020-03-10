/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboulara <mboulara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 18:17:16 by mboulara          #+#    #+#             */
/*   Updated: 2019/02/18 18:22:12 by mboulara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*tmp;
	int		len;
	int		i;

	len = (int)ft_strlen(str);
	tmp = (char*)malloc(sizeof(char) * len + 1);
	i = -1;
	if (tmp)
	{
		while (++i < len)
			tmp[i] = str[i];
		tmp[i] = '\0';
	}
	return (tmp);
}
