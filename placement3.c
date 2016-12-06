/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   placement0.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chle-van <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/03 06:16:06 by chle-van          #+#    #+#             */
/*   Updated: 2016/12/06 05:56:18 by chle-van         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_p14(char **tab, int i, int j, t_piece *piece, int size)
{
	char t;
	char p;

	t = ft_dot(piece->place);
	p = ft_diez(piece->place);
	if (piece->type != 14)
		return (ft_p15(tab, i, j, piece, size));
	if (tab[i + 1][j] == t || tab[i + 2][j] == t || tab[i + 1][j - 1] == t)
	{
		tab[i][j] = p;
		tab[i + 1][j] = p;
		tab[i + 1][j - 1] = p;
		tab[i + 2][j] = p;
		return (1);
	}
	if (i + 1 < size - piece->l)
		return (ft_p14(tab, i + 1, j, piece, size));
	else if (j + 1 < size - piece->h)
		return (ft_p14(tab, 0, j + 1, piece, size));
	else
		return (0);
}

int		ft_p15(char **tab, int i, int j, t_piece *piece, int size)
{
	char t;
	char p;

	t = ft_dot(piece->place);
	p = ft_diez(piece->place);
	if (piece->type != 15)
		return (ft_p16(tab, i, j, piece, size));
	if (tab[i + 1][j] == t || tab[i + 2][j] == t || tab[i + 2][j + 1] == t)
	{
		tab[i][j] = p;
		tab[i + 1][j] = p;
		tab[i + 2][j] = p;
		tab[i + 2][j + 1] = p;
		return (1);
	}
	if (i + 1 < size - piece->l)
		return (ft_p15(tab, i + 1, j, piece, size));
	else if (j + 1 < size - piece->h)
		return (ft_p15(tab, 0, j + 1, piece, size));
	else
		return (0);
}

int		ft_p16(char **tab, int i, int j, t_piece *piece, int size)
{
	char t;
	char p;

	t = ft_dot(piece->place);
	p = ft_diez(piece->place);
	if (piece->type != 16)
		return (ft_p17(tab, i, j, piece, size));
	if (tab[i + 1][j] == t || tab[i + 2][j] == t || tab[i + 2][j - 1] == t)
	{
		tab[i][j] = p;
		tab[i + 1][j] = p;
		tab[i + 2][j] = p;
		tab[i + 2][j - 1] = p;
		return (1);
	}
	if (i + 1 < size - piece->l)
		return (ft_p16(tab, i + 1, j, piece, size));
	else if (j + 1 < size - piece->h)
		return (ft_p16(tab, 0, j + 1, piece, size));
	else
		return (0);
}

int		ft_p17(char **tab, int i, int j, t_piece *piece, int size)
{
	char t;
	char p;

	t = ft_dot(piece->place);
	p = ft_diez(piece->place);
	if (piece->type != 17)
		return (ft_p18(tab, i, j, piece, size));
	if (tab[i][j + 1] == t || tab[i + 1][j + 1] == t || tab[i + 2][j + 1] == t)
	{
		tab[i][j] = p;
		tab[i][j + 1] = p;
		tab[i + 1][j + 1] = p;
		tab[i + 2][j + 1] = p;
		return (1);
	}
	if (i + 1 < size - piece->l)
		return (ft_p17(tab, i + 1, j, piece, size));
	else if (j + 1 < size - piece->h)
		return (ft_p17(tab, 0, j + 1, piece, size));
	else
		return (0);
}

int		ft_p18(char **tab, int i, int j, t_piece *piece, int size)
{
	char t;
	char p;

	t = ft_dot(piece->place);
	p = ft_diez(piece->place);
	if (piece->type != 18)
		return (0);
	if (tab[i + 1][j] == t || tab[i + 2][j] == t || tab[i][j + 1] == t)
	{
		tab[i][j] = p;
		tab[i + 1][j] = p;
		tab[i + 2][j] = p;
		tab[i][j + 1] = p;
		return (1);
	}
	if (i + 1 < size - piece->l)
		return (ft_p18(tab, i + 1, j, piece, size));
	else if (j + 1 < size - piece->h)
		return (ft_p18(tab, 0, j + 1, piece, size));
	else
		return (0);
}
