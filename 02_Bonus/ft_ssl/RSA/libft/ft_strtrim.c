/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboulara <mboulara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 11:25:28 by mboulara          #+#    #+#             */
/*   Updated: 2019/03/01 15:42:09 by mboulara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*ptr;
	size_t	i;
	size_t	x;

	i = 0;
	if (!s)
		return (0);
	while ((*s == ' ') || (*s == '\n') || (*s == '\t'))
		s++;
	x = ft_strlen(s);
	while (x != 0 && ((s[x - 1] == ' ') || (s[x - 1] == '\n')
				|| (s[x - 1] == '\t')))
		x--;
	ptr = (char*)malloc(sizeof(char) * (x + 1));
	if (ptr)
	{
		ft_strncpy(ptr, s, x);
		ptr[x] = '\0';
	}
	return (ptr);
}
