/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mod_inverse.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboulara <mboulara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 14:51:45 by mboulara          #+#    #+#             */
/*   Updated: 2019/12/11 16:36:32 by mboulara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rsa.h"

uint64_t	mul_inv(uint64_t a, uint64_t b)
{
	t_mod_inv vars;

	vars.t = 0;
	vars.nt = 1;
	vars.r = b;
	vars.nr = a % b;
	while (vars.nr != 0)
	{
		vars.q = vars.r / vars.nr;
		vars.tmp = vars.nt;
		vars.nt = vars.t - vars.q * vars.nt;
		vars.t = vars.tmp;
		vars.tmp = vars.nr;
		vars.nr = vars.r - vars.q * vars.nr;
		vars.r = vars.tmp;
	}
	if (vars.r > 1)
		return (-1);
	if (vars.t < 0)
		vars.t += b;
	return (vars.t);
}

/*
** Another naive slow implementaion
** uint64_t	modular_inverse(uint64_t a, uint64_t c)
** {
**   a %= c;
**   for (uint64_t i = 1; i < c; i++)
**     {
**       if ((a * i) % c == 1)
** 	return i;
**     }
**   return 0;
** }
*/
