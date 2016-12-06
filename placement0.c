/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   placement0.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chle-van <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/03 06:16:06 by chle-van          #+#    #+#             */
/*   Updated: 2016/12/06 02:33:30 by chle-van         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int		ft_p00(char **tab, int i, int j, t_piece *piece)
{
	char t;
	char p;

	t = ft_dot(piece->place);
	p = ft_diez(piece->place);
	if (piece->type != 0)
		return (ft_p01(tab, i, j, c, type));
	if (tab[i][j + 1] == t || tab[i][j + 2] == t || tab[i][j + 3] == t)
	{
		tab[i][j] = p;
		tab[i][j + 1] = p;
		tab[i][j + 2] = p;
		tab[i][j + 3] = p;
		return (1);
	}
	if (i + 1 < size - list->l)
		return (p00(tab, i + 1, j, c, piece));
	else if (j + 1 < size - list->h)
		return (p00(tab, 0, j + 1, c, piece));
	else
		return (0);
}

int		ft_p01(char **tab, int i, int j, t_piece *piece)
{
	char t;
	char p;

	t = ft_dot(piece->place);
	p = ft_diez(piece->place);
	if (piece->type != 1)
		return (ft_p02(tab, i, j, c, type));
	if (tab[i + 1][j] == t || tab[i + 2][j] == t || tab[i + 3][j] == t)
	{
		tab[i][j] = p;
		tab[i + 1][j] = p;
		tab[i + 2][j] = p;
		tab[i + 3][j] = p;
		return (1);
	}
	if (i + 1 < size - list->l)
		return (p01(tab, i + 1, j, c, piece));
	else if (j + 1 < size - list->h)
		return (p01(tab, 0, j + 1, c, piece));
	else
		return (0);
}

int		ft_p02(char **tab, int i, int j, t_piece *piece)
{
	char t;
	char p;

	t = ft_dot(piece->place);
	p = ft_diez(piece->place);
	if (piece->type != 2)
		return (ft_p03(tab, i, j, c, type));
	if (tab[i][j + 1] == t || tab[i + 1][j] == t || tab[i + 1][j + 1] == t)
	{
		tab[i][j] = p;
		tab[i][j + 1] = p;
		tab[i + 1][j] = p;
		tab[i + 1][j + 1] = p;
		return (1);
	}
	if (i + 1 < size - list->l)
		return (p02(tab, i + 1, j, c, piece));
	else if (j + 1 < size - list->h)
		return (p02(tab, 0, j + 1, c, piece));
	else
		return (0);
}

int		ft_p03(char **tab, int i, int j, t_piece *piece)
{
	char t;
	char p;

	t = ft_dot(piece->place);
	p = ft_diez(piece->place);
	if (piece->type == 3)
		return (ft_p04(tab, i, j, c, type));
	if (tab[i][j + 1] == t || tab[i][j + 2] == t || tab[i + 1][j + 2] == t)
	{
		tab[i][j] = p;
		tab[i][j + 1] = p;
		tab[i][j + 2] = p;
		tab[i + 1][j + 2] = p;
		return (1);
	}
	if (i + 1 < size - list->l)
		return (p03(tab, i + 1, j, c, piece));
	else if (j + 1 < size - list->h)
		return (p03(tab, 0, j + 1, c, piece));
	else
		return (0);
}
