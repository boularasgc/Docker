/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rsakrc.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboulara <mboulara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 01:28:32 by mboulara          #+#    #+#             */
/*   Updated: 2020/01/24 01:30:17 by mboulara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_RSAKRC_H
# define FT_RSAKRC_H
uint8_t			parse_rsakrc_args(int c, const char *argv[], t_rsa64bit *rsa);
uint8_t			rsakrc_cmnds_cases(const char *argv[], int *i, t_rsa64bit *rsa);

# endif