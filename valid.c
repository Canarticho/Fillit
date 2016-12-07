/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_valid.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chle-van <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 07:58:11 by chle-van          #+#    #+#             */
/*   Updated: 2016/12/07 04:56:36 by chle-van         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_piece	*ft_tetvalid(char *c)
{
	int		i;
	int		hash;
	char	**tab;

	if (!c)
		return (NULL);
	tab = NULL;
	i = 0;
	hash = 0;
	ft_putstr("tetvalid :\n");
	ft_putstr(c);
	while (i < 20)
	{
		if (c[i] != '#' && c[i] != '.' && (c[4  + (i * 5)] != '\n' && i < 4))
		{
			printf("bug i = %d",i);
			return (0);
		}
		if (c[i] == '#')
			hash++;
		i++;
	}
	ft_putstr("format valide\n");
	if (hash != 4)
		return (NULL);
	if (c[i] == '\n' || c[i] == '\0')
	{
		tab = ft_strsplit(c, '\n');
		ft_putstr("4# ok\n");
	}
	return (ft_detect(tab));
}

int		ft_opt_size(t_piece *list)
{
	int	i;

	i = 0;
	while (list->next)
	{
		list = list->next;
		i++;
	}
	while (!ft_sqrt(i))
		i++;
	return (2 * ft_sqrt(i));
}

char	**ft_newmap(int size)
{
	int		i;
	char	**tab;

	i = 0;
	tab = (char **)malloc(sizeof(tab) * size);
	while (i < size)
	{
		tab[i] = malloc(sizeof(*tab) * size);
		ft_memset(tab[i], '.', size);
		i++;
	}
	return (tab);
}

int		ft_allpl(char **map, t_piece *list, int size)
{
	int i;
	int j;
	int l;
	int c;

	j = 0;
	i = 0;
	c = -1;
	l = -1;
	while (list->next)
	{
		if (!list->place)
			return (0);
		list = list->next;
		i++;
	}
	while (++l < size)
		while (++c < size)
			if (map[l][c] == '#')
				j++;
	if (j * 4 == i)
		return (1);
	else
		return (0);
}
