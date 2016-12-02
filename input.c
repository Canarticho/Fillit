/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chle-van <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 03:58:26 by chle-van          #+#    #+#             */
/*   Updated: 2016/12/02 09:58:10 by chle-van         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_piece	*tabfctd(void)
{
	t_piece *fp(char **, char);

	fp = malloc(sizeof(*fp) * 19)
	fp[0] = &ft_d00;
	fp[1] = ft_d01;
	fp[2] = ft_d02;
	fp[3] = ft_d03;
	fp[4] = ft_d04;
	fp[5] = ft_d05;
	fp[6] = ft_d06;
	fp[7] = ft_d07;
	fp[8] = ft_d08;
	fp[9] = ft_d09;
	fp[10] = ft_d10;
	fp[11] = ft_d11;
	fp[12] = ft_d12;
	fp[13] = ft_d13;
	fp[14] = ft_d14;
	fp[15] = ft_d15;
	fp[16] = ft_d16;
	fp[17] = ft_d17;
	fp[18] = ft_d18;
	return (fp)
}
/*
int	*tabfctp(void)
{
	int (*fp[19])(char **, char);

	fp[0] = ft_p01;
	fp[1] = ft_p02;
	fp[2] = ft_p03;
	fp[3] = ft_p04;
	fp[4] = ft_p05;
	fp[5] = ft_p06;
	fp[6] = ft_p07;
	fp[7] = ft_p08;
	fp[8] = ft_p09;
	fp[9] = ft_p10;
	fp[10] = ft_p11;
	fp[11] = ft_p12;
	fp[12] = ft_p13;
	fp[13] = ft_p14;
	fp[14] = ft_p15;
	fp[15] = ft_p16;
	fp[16] = ft_p17;
	fp[17] = ft_p18;
	fp[18] = ft_p19;
	return (fp);
}
*/
char	*ft_readtet(char *file)
{
	int fd;
	char *buff;

	if (!(buff = malloc(sizeof(char *) * 22)))
		return (NULL);
	fd = open(file, 0_RDONLY);
	if (read(fd, buff, BUFF_S + 1) >= 20)
		return (buff);
	return (NULL);
	
}

int	main(int ac, char **av)
{
	if (ac != 2)
	{
	}
	if (ac == 2)
	{
		if (ft_is_valid(av[1]))
		{
			ft_putstr("error\n");
			return (0);
		}
		//traitement
	}
}
