/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_valid.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chle-van <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 07:58:11 by chle-van          #+#    #+#             */
/*   Updated: 2016/12/03 05:42:13 by chle-van         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_piece	*ft_detect(char **tab)
{
	t_piece	*res;

	res = ft_d00(tab, '#');
	res->place = 0;
	return (res);
}

t_piece	*ft_d00(char **p, char c)
{
	int		i;
	int		j;
	t_piece	*maillon;

	i = 0;
	j = 0;
	while (j < 4)
	{
		while (i < 4 && p[j][i] == c)
			i++;
		if (i == 3)
		{
			maillon = malloc(sizeof(t_piece));
			maillon->type = 0;
			maillon->l = 1;
			maillon->h = 4;
			maillon->next = NULL;
			return (maillon);
		}
		j++;
	}
	return (ft_d01(p, c));
}

t_piece	*ft_d01(char **p, char c)
{
	int		i;
	int		j;
	t_piece	*maillon;

	i = 0;
	j = 0;
	maillon = NULL;
	while (i < 4)
	{
		while (j < 4 && p[i][j] == c)
			j++;
		if (j == 3)
		{
			maillon = malloc(sizeof(t_piece));
			maillon->type = 1;
			maillon->l = 4;
			maillon->h = 1;
			maillon->next = NULL;
			return (maillon);
		}
		i++;
	}
	return (ft_d02(p, c));
}

t_piece	*ft_d02(char **p, char c)
{
	int		i;
	int		j;
	t_piece	*maillon;

	i = 0;
	j = 0;
	while (j < 4)
	{
		while (i < 4)
		{
			if (p[j][i] == c && p[j + 1][i] == c && p[j][i + 1] == c &&
					p[j + 1][i + 1] == c)
			{
				maillon = malloc(sizeof(t_piece));
				maillon->type = 2;
				maillon->l = 2;
				maillon->h = 2;
				maillon->next = NULL;
				return (maillon);
			}
			i++;
		}
		j++;
	}
	return (ft_d03(p, c));
}

t_piece	*ft_d03(char **p, char c)
{
	int		i;
	int		j;
	t_piece	*maillon;

	i = 0;
	j = 0;
	while (j < 4)
	{
		while (i < 4)
		{
			if (p[j][i] == c && p[j][i + 1] == c && p[j][i + 2] == c &&
					p[j + 1][i + 2] == c)
			{
				maillon = malloc(sizeof(t_piece));
				maillon->type = 3;
				maillon->l = 2;
				maillon->h = 2;
				maillon->next = NULL;
				return (maillon);
			}
			i++;
		}
		j++;
	}
	return (ft_d04(p, c));
}