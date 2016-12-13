/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   placement0.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chle-van <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/03 06:16:06 by chle-van          #+#    #+#             */
/*   Updated: 2016/12/13 07:04:07 by chle-van         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	ft_dot(int place)
{
	if (place)
		return ('.');
	else
		return ('#');
}

char	ft_diez(int place)
{
	if (!place)
		return ('.');
	else
		return ('#');
}

int		ft_p00(char **tab, int i, int j, t_piece *piece, int size)
{
	char t;
	char p;
	t = ft_diez(piece->place);
	ft_displaytab(tab, size);
		p = ft_dot(piece->place);
	if (piece->type != 0)
		return (ft_p01(tab, i, j, piece, size));
	while (j <= size - piece->l)
	{
		while (i <= size - piece->h)
		{
			if (tab[i][j] == t && tab[i + 1][j] == t && tab[i + 2][j] == t && tab[i + 3][j] == t)
			{
				ft_putstr("p0 ok");
				tab[i][j] = p;
				tab[i + 1][j] = p;
				tab[i + 2][j] = p;
				tab[i + 3][j] = p;
				return (1);
			}
			i++;
		}
		j++;
		i = 0;
	}
	return (0);
}

int		ft_p01(char **tab, int i, int j, t_piece *piece, int size)
{
	char t;
	char p;

	t = ft_diez(piece->place);
	p = ft_dot(piece->place);
	if (piece->type != 1)
		return (ft_p02(tab, i, j, piece, size));
	while (j <= size - piece->l)
	{
		while (i <= size - piece->h)
		{
			if (tab[i][j] == t && tab[i][j + 1] == t && tab[i][j + 2] == t && tab[i][j + 3] == t)
			{
				tab[i][j] = p;
				tab[i][j + 1] = p;
				tab[i][j + 2] = p;
				tab[i][j + 3] = p;
				return (1);
			}
			i++;
		}
		j++;
		i = 0;
	}
		return (0);
}

int		ft_p02(char **tab, int i, int j, t_piece *piece, int size)
{
	char t;
	char p;

	t = ft_diez(piece->place);
	p = ft_dot(piece->place);
	if (piece->type != 2)
		return (ft_p03(tab, i, j, piece, size));
	while (j <= size - piece->l)
	{
		while (i <= size - piece->h)
		{
			if (tab[i][j] == t && tab[i][j + 1] == t && tab[i + 1][j] == t && tab[i + 1][j + 1] == t)
			{
				tab[i][j] = p;
				tab[i][j + 1] = p;
				tab[i + 1][j] = p;
				tab[i + 1][j + 1] = p;
				return (1);
			}
			i++;
		}
		j++;
		i = 0;
	}
		return (0);
}

int		ft_p03(char **tab, int i, int j, t_piece *piece, int size)
{
	char t;
	char p;

	t = ft_diez(piece->place);	
	p = ft_dot(piece->place);
	if (piece->type != 3)
		return (ft_p04(tab, i, j, piece, size));
	while (j <= size - piece->l)
	{
		while (i <= size - piece->h)
		{
			if (tab[i][j] == t && tab[i][j + 1] == t && tab[i][j + 2] == t && tab[i + 1][j + 2] == t)
			{
				tab[i][j] = p;
				tab[i][j + 1] = p;
				tab[i][j + 2] = p;
				tab[i + 1][j + 2] = p;
				return (1);
			}
			i++;
		}
		j++;
		i = 0;
	}
	return (0);
}
