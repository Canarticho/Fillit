/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reso.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chle-van <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/04 03:26:01 by chle-van          #+#    #+#             */
/*   Updated: 2016/12/04 09:17:54 by chle-van         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	**ft_res(t_piece *list, char **map, int size)
{
	int i;
	t_piece *tmp;

	tmp = list;
	i = 0;
	while (tmp->next)
	{
		if (!tmp->place)
			if (ft_tplace (map, list, size))
				ft_res(list, map, size);
		tmp = tmp_next;
	}
}
