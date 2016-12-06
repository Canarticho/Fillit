/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   placement0.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chle-van <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/03 06:16:06 by chle-van          #+#    #+#             */
/*   Updated: 2016/12/06 02:44:46 by chle-van         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_p09(char **tab, int i, int j, t_piece *piece)
{
	char t;
	char p;

	t = ft_dot(piece->place);
	p = ft_diez(piece->place);
	if (piece->type != 9)
		return (ft_p10(tab, i, j, c, type));
	if (tab[i + 1][j] == t || tab[i + 1][j + 1] == t || tab[i + 2][j + 1] == t)
	{
		tab[i][j] = p;
		tab[i + 1][j] = p;
		tab[i + 1][j + 1] = p;
		tab[i + 2][j + 1] = p;
		return (1);
	}
	if (i + 1 < size - list->l)
		return (p09(tab, i + 1, j, c, piece));
	else if (j + 1 < size - list->h)
		return (p09(tab, 0, j + 1, c, piece));
	else
		return (0);
}

int		ft_p10(char **tab, int i, int j, t_piece *piece)
{
	char t;
	char p;

	t = ft_dot(piece->place);
	p = ft_diez(piece->place);
	if (piece->type != 10)
		return (ft_p06(tab, i, j, c, type));
	if (tab[i + 1][j] == t || tab[i + 1][j - 1] == t || tab[i + 2][j - 1] == t)
	{
		tab[i][j] = p;
		tab[i + 1][j] = p;
		tab[i + 1][j - 1] = p;
		tab[i + 2][j - 1] = p;
		return (1);
	}
	if (i + 1 < size - list->l)
		return (p10(tab, i + 1, j, c, piece));
	else if (j + 1 < size - list->h)
		return (p10(tab, 0, j + 1, c, piece));
	else
		return (0);
}

int		ft_p11(char **tab, int i, int j, t_piece *piece)
{
	char t;
	char p;

	t = ft_dot(piece->place);
	p = ft_diez(piece->place);
	if (piece->type != 11)
		return (ft_p012(tab, i, j, c, type));
	if (tab[i][j + 1] == t || tab[i][j + 2] == t || tab[i + 1][j + 1] == t)
	{
		tab[i][j] = p;
		tab[i + 1][j + 1] = p;
		tab[i + 1][j] = p;
		tab[i + 2][j] = p;
		return (1);
	}
	if (i + 1 < size - list->l)
		return (p11(tab, i + 1, j, c, piece));
	else if (j + 1 < size - list->h)
		return (p11(tab, 0, j + 1, c, piece));
	else
		return (0);
}

int		ft_p12(char **tab, int i, int j, t_piece *piece)
{
	char t;
	char p;

	t = ft_dot(piece->place);
	p = ft_diez(piece->place);
	if (piece->type != 12)
		return (ft_p13(tab, i, j, c, type));
	if (tab[i + 1][j + 1] == t || tab[i + 1][j] == t || tab[i + 2][j] == t)
	{
		tab[i][j] = p;
		tab[i + 1][j + 1] = p;
		tab[i + 1][j] = p;
		tab[i + 2][j] = p;
		return (1);
	}
	if (i + 1 < size - list->l)
		return (p12(tab, i + 1, j, c, piece));
	else if (j + 1 < size - list->h)
		return (p12(tab, 0, j + 1, c, piece));
	else
		return (0);
}

int		ft_p13(char **tab, int i, int j, t_piece *piece)
{
	char t;
	char p;

	t = ft_dot(piece->place);
	p = ft_diez(piece->place);
	if (piece->type != 13)
		return (ft_p14(tab, i, j, c, type));
	if (tab[i + 1][j + 1] == t || tab[i + 1][j] == t || tab[i + 1][j - 1] == t)
	{
		tab[i][j] = p;
		tab[i + 1][j + 1] = p;
		tab[i + 1][j] = p;
		tab[i + 1][j - 1] = p;
		return (1);
	}
	if (i + 1 < size - list->l)
		return (p14(tab, i + 1, j, c, piece));
	else if (j + 1 < size - list->h)
		return (p14(tab, 0, j + 1, c, piece));
	else
		return (0);
}
