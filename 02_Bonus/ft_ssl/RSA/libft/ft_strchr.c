/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboulara <mboulara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 18:19:40 by mboulara          #+#    #+#             */
/*   Updated: 2019/02/19 18:55:56 by mboulara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strchr(const char *s, int c)
{
	int		i;

	i = 0;
	if ((char)c == '\0' && !s[0])
		return ((char*)s + i);
	while (s[i])
	{
		if ((char)c == s[i])
			return ((char*)s + i);
		i++;
		if ((char)c == s[i])
			return ((char*)s + i);
	}
	return ((char*)0);
}
