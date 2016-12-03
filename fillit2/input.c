/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chle-van <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 03:58:26 by chle-van          #+#    #+#             */
/*   Updated: 2016/12/03 02:53:30 by chle-van         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*ft_readtet(char *file)
{
	int		fd;
	char	*buff;

	if (!(buff = malloc(sizeof(char *) * 22)))
		return (NULL);
	fd = open(file, O_RDONLY);
	if (read(fd, buff, BUFF_S + 1) >= 20)
		return (buff);
	return (NULL);
}

int		main(int ac, char **av)
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
