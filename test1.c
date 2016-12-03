/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_valid.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chle-van <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 07:58:11 by chle-van          #+#    #+#             */
/*   Updated: 2016/12/03 05:34:39 by chle-van         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_piece	*ft_d04(char **p, char c)
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
		if (p[j][i] == c && p[j + 1][i] == c && p[j + 1][i - 1] == c &&
				p[j + 1][i - 2] == c)
		{
			maillon = malloc(sizeof(t_piece));
			maillon->type = 4;
			maillon->l = 1;
			maillon->h = 2;
			maillon->next = NULL;
			return (maillon);
		}
		j++;
	}
	return (ft_d05(p, c));
}

t_piece	*ft_d05(char **p, char c)
{
	int		i;
	int		j;
	t_piece	*maillon;

	i = 0;
	j = 0;
	while (i < 4)
	{
		while (j < 4 && p[i][j] == c)
			j++;
		if (p[j][i] == c && p[j + 1][i] == c && p[j + 1][i + 1] == c &&
				p[j + 1][i + 2] == c)
		{
			maillon = malloc(sizeof(t_piece));
			maillon->type = 5;
			maillon->l = 3;
			maillon->h = 2;
			maillon->next = NULL;
			return (maillon);
		}
		i++;
	}
	return (ft_d06(p, c));
}

t_piece	*ft_d06(char **p, char c)
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
					p[j][i + 2] == c)
			{
				maillon = malloc(sizeof(t_piece));
				maillon->type = 6;
				maillon->l = 3;
				maillon->h = 2;
				maillon->next = NULL;
				return (maillon);
			}
		}
		i++;
	}
	return (ft_d07(p, c));
}

t_piece	*ft_d07(char **p, char c)
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
			if (p[j][i] == c && p[j][i + 1] == c && p[j + 1][i] == c &&
					p[j + 1][i - 1] == c)
			{
				maillon = malloc(sizeof(t_piece));
				maillon->type = 7;
				maillon->l = 2;
				maillon->h = 2;
				maillon->next = NULL;
				return (maillon);
			}
			i++;
		}
		j++;
	}
	return (ft_d08(p, c));
}

t_piece	*ft_d08(char **p, char c)
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
			if (p[j][i] == c && p[j][i + 1] == c && p[j + 1][i + 1] == c &&
					p[j + 1][i + 2] == c)
			{
				maillon = malloc(sizeof(t_piece));
				maillon->type = 8;
				maillon->l = 3;
				maillon->h = 2;
				maillon->next = NULL;
				return (maillon);
			}
			i++;
		}
		j++;
	}
	return (ft_d09(p, c));
}