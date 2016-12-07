/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reso.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chle-van <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/04 03:26:01 by chle-van          #+#    #+#             */
/*   Updated: 2016/12/07 10:27:38 by chle-van         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_res(t_piece *list, char **map, int size)
{
	int		i;
	t_piece *tmp;

	tmp = list;
	i = 0;
	while (tmp->next)
	{
		if (!tmp->place)
		{
			ft_putstr("pas place\n");
			if (ft_tplace(map, tmp, size))
				ft_res(list, map, size);
		}
		tmp = tmp->next;
	}
}

int		ft_tplace(char **map, t_piece *piece, int size)
{
	int i;
	int j;

	i = 0;
	j = 0;
			if (ft_p00(map, 0, 0, piece, size))
				return (1);
	return (0);
}
