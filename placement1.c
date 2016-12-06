/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   placement0.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chle-van <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/03 06:16:06 by chle-van          #+#    #+#             */
/*   Updated: 2016/12/06 02:35:58 by chle-van         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_p04(char **tab, int i, int j, t_piece *piece)
{
	char t;
	char p;

	t = ft_dot(piece->place);
	p = ft_diez(piece->place);
	if (piece->type == 4)
		return (ft_p05(tab, i, j, c, type));
	if (tab[i + 1][j - 2] == t || tab[i + 1][j - 1] == t || tab[i + 1][j] == t)
	{
		tab[i][j] = p;
		tab[i + 1][j] = p;
		tab[i + 1][j - 1] = p;
		tab[i + 1][j - 2] = p;
		return (1);
	}
	if (i + 1 < size - list->l)
		return (p04(tab, i + 1, j, c, piece));
	else if (j + 1 < size - list->h)
		return (p04(tab, 0, j + 1, c, piece));
	else
		return (0);
}

int		ft_p05(char **tab, int i, int j, t_piece *piece)
{
	char t;
	char p;

	t = ft_dot(piece->place);
	p = ft_diez(piece->place);
	if (piece->type == 5)
		return (ft_p06(tab, i, j, c, type));
	if (tab[i + 1][j] == t || tab[i + 1][j + 1] == t || tab[i + 1][j + 1] == t)
	{
		tab[i][j] = p;
		tab[i + 1][j] = p;
		tab[i + 1][j + 1] = p;
		tab[i + 1][j + 2] = p;
		return (1);
	}
	if (i + 1 < size - list->l)
		return (p05(tab, i + 1, j, c, piece));
	else if (j + 1 < size - list->h)
		return (p05(tab, 0, j + 1, c, piece));
	else
		return (0);
}

int		ft_p06(char **tab, int i, int j, t_piece *piece)
{
	char t;
	char p;

	t = ft_dot(piece->place);
	p = ft_diez(piece->place);
	if (piece->type == 6)
		return (ft_p07(tab, i, j, c, type));
	if (tab[i][j + 1] == t || tab[i + 1][j] == t || tab[i + 1][j + 1] == t)
	{
		tab[i][j] = p;
		tab[i][j + 1] = p;
		tab[i + 1][j] = p;
		tab[i + 1][j + 1] = p;
		return (1);
	}
	if (i + 1 < size - list->l)
		return (p06(tab, i + 1, j, c, piece));
	else if (j + 1 < size - list->h)
		return (p06(tab, 0, j + 1, c, piece));
	else
		return (0);
}

int		ft_p07(char **tab, int i, int j, t_piece *piece)
{
	char t;
	char p;

	t = ft_dot(piece->place);
	p = ft_diez(piece->place);
	if (piece->type == 7)
		return (ft_p08(tab, i, j, c, type));
	if (tab[i][j + 1] == t || tab[i + 1][j] == t || tab[i + 1][j - 1] == t)
	{
		tab[i][j] = p;
		tab[i][j + 1] = p;
		tab[i + 1][j] = p;
		tab[i + 1][j - 1] = p;
		return (1);
	}
	if (i + 1 < size - list->l)
		return (p07(tab, i + 1, j, c, piece));
	else if (j + 1 < size - list->h)
		return (p07(tab, 0, j + 1, c, piece));
	else
		return (0);
}

int		ft_p08(char **tab, int i, int j, t_piece *piece)
{
	char t;
	char p;

	t = ft_dot(piece->place);
	p = ft_diez(piece->place);
	if (piece->type == 8)
		return (ft_p09(tab, i, j, c, type));
	if (tab[i][j + 1] == t || tab[i][j + 2] == t || tab[i + 1][j + 2] == t)
	{
		tab[i][j] = p;
		tab[i][j + 1] = p;
		tab[i + 1][j + 2] = p;
		tab[i + 1][j + 1] = p;
		return (1);
	}
	if (i + 1 < size - list->l)
		return (p08(tab, i + 1, j, c, piece));
	else if (j + 1 < size - list->h)
		return (p08(tab, 0, j + 1, c, piece));
	else
		return (0);
}
