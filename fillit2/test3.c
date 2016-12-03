/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_valid.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chle-van <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 07:58:11 by chle-van          #+#    #+#             */
/*   Updated: 2016/12/03 05:49:41 by chle-van         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_piece	*ft_d14(char **p, char c)
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
		if (p[j][i] == c && p[j + 1][i] == c && p[j + 1][i + 1] == c &&
				p[j + 2][i + 1] == c)
		{
			maillon = malloc(sizeof(t_piece));
			maillon->type = 14;
			maillon->l = 2;
			maillon->h = 3;
			maillon->next = NULL;
			return (maillon);
		}
		j++;
	}
	return (ft_d15(p, c));
}

t_piece	*ft_d15(char **p, char c)
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
		if (p[j][i] == c && p[j + 1][i] == c && p[j + 1][i - 1] == c &&
				p[j + 2][i - 1] == c)
		{
			maillon = malloc(sizeof(t_piece));
			maillon->type = 15;
			maillon->l = 2;
			maillon->h = 3;
			maillon->next = NULL;
			return (maillon);
		}
		i++;
	}
	return (ft_d16(p, c));
}

t_piece	*ft_d16(char **p, char c)
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
					p[j + 1][i + 1] == c)
			{
				maillon = malloc(sizeof(t_piece));
				maillon->type = 16;
				maillon->l = 1;
				maillon->h = 4;
				maillon->next = NULL;
				return (maillon);
			}
		}
		i++;
	}
	return (ft_d17(p, c));
}

t_piece	*ft_d17(char **p, char c)
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
			if (p[j][i] == c && p[j + 1][i] == c && p[j + 2][i] == c &&
					p[j + 1][i + 1] == c)
			{
				maillon = malloc(sizeof(t_piece));
				maillon->type = 17;
				maillon->l = 2;
				maillon->h = 3;
				maillon->next = NULL;
				return (maillon);
			}
			i++;
		}
		j++;
	}
	return (ft_d18(p, c));
}

t_piece	*ft_d18(char **p, char c)
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
			if (p[j][i] == c && p[j + 1][i] == c && p[j + 1][i + 1] == c &&
					p[j + 1][i - 1] == c)
			{
				maillon = malloc(sizeof(t_piece));
				maillon->type = 18;
				maillon->l = 2;
				maillon->h = 3;
				maillon->next = NULL;
				return (maillon);
			}
			i++;
		}
		j++;
	}
	return (NULL);
}
