/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   placement0.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chle-van <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/03 06:16:06 by chle-van          #+#    #+#             */
/*   Updated: 2016/12/04 09:17:53 by chle-van         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tplace(char **map, t_piece *piece, int size)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (tab[i][j] == '.' && i + list->h <= size)
	{
		while (tab[i][j] == '.')
		{
			if (ft_p00)
				return (1);
			i++;
		}
		j++;
	}
	return (0);
}

int	ft_p00(char **tab, int i, int j, char c, t_piece *piece)
{
	if (type == 0)
		return (ft_p01(tab, i, j, c, type))
	if (tab[i][j + 1] == c || tab[i][j + 2] == c || tab[i][j + 3] == c)
	{

	}
	if (i + 1 < size - list->l)
		return (p00(tab, i + 1, j, c, piece));
	else if (j + 1 < size - list->h)
		return (p00(tab, 0, j + 1, c, piece))
	else
	return (0);
}
