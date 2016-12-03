/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chle-van <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 03:58:26 by chle-van          #+#    #+#             */
/*   Updated: 2016/12/03 08:20:54 by chle-van         ###   ########.fr       */
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

t_piece	*ft_input(char *file)
{
	t_piece	*list;
	t_piece	*tmp;
	char	*buff;

	if ((tmp = ft_tetvalid(ft_readtet(file))))
	{
		list = tmp;
		while (ft_strlen(buff = ft_readtet(file)) != 20)
		{
			if ((tmp = ft_tetvalid(buff)))
				ft_ladd(list, tmp);
			else
				return (NULL);
		}
		ft_ladd(list, tmp);
		return (list);
	}
	return (NULL);
}

int		main(int ac, char **av)
{
	if (ac != 2)
	{
	}
	if (ac == 2)
	{
		ft_fillit(av[1]);
	}
}
