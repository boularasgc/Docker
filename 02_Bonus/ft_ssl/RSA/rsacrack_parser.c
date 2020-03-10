/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rsacrack_parser.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboulara <mboulara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 00:18:23 by mboulara          #+#    #+#             */
/*   Updated: 2020/01/29 02:32:24 by mboulara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rsa.h"
#include "ft_ssl.h"
#include "ft_rsakrc.h"

t_rsa_cmds	g_rsakrc_dis[] =
{
	{"-in", in_F},
	{"-out", out_F},
	{NULL, 0},
};

int				rsacrack_parser(int argc, const char *argv[], t_cx data,
t_cyph_f f)
{
	t_rsa64bit	rsa;
	int			i;
	uint8_t		flag;

	ft_bzero(&rsa, sizeof(rsa));
	(void)data;
	(void)f;
	i = 0;
	flag = 0;
	flag = parse_rsakrc_args(argc, argv, &rsa);
	flag |= pbin_F;
	rsa_file_select(&rsa, flag);
	ft_printf("%llu\n", rsa.modulus);
	prime_factors(rsa.modulus);
	free_rsa_struct(&rsa);
	return (i);
}

uint8_t			parse_rsakrc_args(int c, const char *argv[], t_rsa64bit *rsa)
{
	int			i;
	uint8_t		flag;

	i = 0;
	flag = 0;
	while (i < c && argv[i][0] == '-')
		flag |= rsakrc_cmnds_cases(argv, &i, rsa);
	if (i > c)
	{
		ft_printf(KCYN" [-in file] [-out file]"RESET);
		exit(0);
	}
	else if (i == c)
		return (flag);
	return (0);
}

uint8_t			rsakrc_cmnds_cases(const char *argv[], int *i, t_rsa64bit *rsa)
{
	int			j;
	uint8_t		flag;

	flag = 0;
	j = -1;
	while (g_rsakrc_dis[++j].cmd_name != NULL)
		if (!ft_strcmp(g_rsakrc_dis[j].cmd_name, argv[*i]))
		{
			flag |= g_rsakrc_dis[j].flag;
			break ;
		}
	if (!ft_strcmp(argv[*i], "-out"))
		rsa->filename2 = ft_strdup(argv[++(*i)]);
	if (!ft_strcmp(argv[*i], "-in"))
		rsa->filename1 = ft_strdup(argv[++(*i)]);
	if (g_rsakrc_dis[j].cmd_name == NULL)
		*i += 20;
	*i += 1;
	return (flag);
}
