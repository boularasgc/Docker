/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboulara <mboulara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 09:01:43 by mboulara          #+#    #+#             */
/*   Updated: 2020/01/23 21:18:15 by mboulara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	free_string(char **str)
{
	if (str != NULL && **str != '\0')
	{
		ft_bzero(*str, ft_strlen(*str));
		free(*str);
		*str = NULL;
	}
}

void	free_string_len(char *str, size_t size)
{
	if (str != NULL && *str != '\0')
	{
		ft_bzero(str, size);
		free(str);
		str = NULL;
	}
}
