/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   placement0.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chle-van <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/03 06:16:06 by chle-van          #+#    #+#             */
/*   Updated: 2016/12/06 05:45:12 by chle-van         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_p04(char **tab, int i, int j, t_piece *piece, int size)
{
	char t;
	char p;

	t = ft_dot(piece->place);
	p = ft_diez(piece->place);
	if (piece->type != 4)
		return (ft_p05(tab, i, j, piece, size));
	if (tab[i + 1][j - 2] == t || tab[i + 1][j - 1] == t || tab[i + 1][j] == t)
	{
		tab[i][j] = p;
		tab[i + 1][j] = p;
		tab[i + 1][j - 1] = p;
		tab[i + 1][j - 2] = p;
		return (1);
	}
	if (i + 1 < size - piece->l)
		return (ft_p04(tab, i + 1, j, piece, size));
	else if (j + 1 < size - piece->h)
		return (ft_p04(tab, 0, j + 1, piece, size));
	else
		return (0);
}

int		ft_p05(char **tab, int i, int j, t_piece *piece, int size)
{
	char t;
	char p;

	t = ft_dot(piece->place);
	p = ft_diez(piece->place);
	if (piece->type != 5)
		return (ft_p06(tab, i, j, piece, size));
	if (tab[i + 1][j] == t || tab[i + 1][j + 1] == t || tab[i + 1][j + 1] == t)
	{
		tab[i][j] = p;
		tab[i + 1][j] = p;
		tab[i + 1][j + 1] = p;
		tab[i + 1][j + 2] = p;
		return (1);
	}
	if (i + 1 < size - piece->l)
		return (ft_p05(tab, i + 1, j, piece, size));
	else if (j + 1 < size - piece->h)
		return (ft_p05(tab, 0, j + 1, piece, size));
	else
		return (0);
}

int		ft_p06(char **tab, int i, int j, t_piece *piece, int size)
{
	char t;
	char p;

	t = ft_dot(piece->place);
	p = ft_diez(piece->place);
	if (piece->type != 6)
		return (ft_p07(tab, i, j, piece, size));
	if (tab[i][j + 1] == t || tab[i + 1][j] == t || tab[i + 1][j + 1] == t)
	{
		tab[i][j] = p;
		tab[i][j + 1] = p;
		tab[i + 1][j] = p;
		tab[i + 1][j + 1] = p;
		return (1);
	}
	if (i + 1 < size - piece->l)
		return (ft_p06(tab, i + 1, j, piece, size));
	else if (j + 1 < size - piece->h)
		return (ft_p06(tab, 0, j + 1, piece, size));
	else
		return (0);
}

int		ft_p07(char **tab, int i, int j, t_piece *piece, int size)
{
	char t;
	char p;

	t = ft_dot(piece->place);
	p = ft_diez(piece->place);
	if (piece->type != 7)
		return (ft_p08(tab, i, j, piece, size));
	if (tab[i][j + 1] == t || tab[i + 1][j] == t || tab[i + 1][j - 1] == t)
	{
		tab[i][j] = p;
		tab[i][j + 1] = p;
		tab[i + 1][j] = p;
		tab[i + 1][j - 1] = p;
		return (1);
	}
	if (i + 1 < size - piece->l)
		return (ft_p07(tab, i + 1, j, piece, size));
	else if (j + 1 < size - piece->h)
		return (ft_p07(tab, 0, j + 1, piece, size));
	else
		return (0);
}

int		ft_p08(char **tab, int i, int j, t_piece *piece, int size)
{
	char t;
	char p;

	t = ft_dot(piece->place);
	p = ft_diez(piece->place);
	if (piece->type != 8)
		return (ft_p09(tab, i, j, piece, size));
	if (tab[i][j + 1] == t || tab[i][j + 2] == t || tab[i + 1][j + 2] == t)
	{
		tab[i][j] = p;
		tab[i][j + 1] = p;
		tab[i + 1][j + 2] = p;
		tab[i + 1][j + 1] = p;
		return (1);
	}
	if (i + 1 < size - piece->l)
		return (ft_p08(tab, i + 1, j, piece, size));
	else if (j + 1 < size - piece->h)
		return (ft_p08(tab, 0, j + 1, piece, size));
	else
		return (0);
}
