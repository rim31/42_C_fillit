/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw_tetri_t.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalexan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/06 11:31:21 by baalexan          #+#    #+#             */
/*   Updated: 2016/01/14 14:08:08 by baalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int		*ft_draw_tetri_t_1(void)
{
	int *tab;

	tab = (int *)malloc(sizeof(int) * 3);
	tab[0] = 5;
	tab[1] = 1;
	tab[2] = 4;
	return (tab);
}

static int		*ft_draw_tetri_t_2(void)
{
	int *tab;

	tab = (int *)malloc(sizeof(int) * 3);
	tab[0] = 4;
	tab[1] = 1;
	tab[2] = 5;
	return (tab);
}

static int		*ft_draw_tetri_t_3(void)
{
	int *tab;

	tab = (int *)malloc(sizeof(int) * 3);
	tab[0] = 1;
	tab[1] = 1;
	tab[2] = 4;
	return (tab);
}

static int		*ft_draw_tetri_t_4(void)
{
	int *tab;

	tab = (int *)malloc(sizeof(int) * 3);
	tab[0] = 4;
	tab[1] = 1;
	tab[2] = 1;
	return (tab);
}

int				*ft_draw_tetri_t(int form)
{
	int *tab;

	if (form == 1)
		tab = ft_draw_tetri_t_1();
	if (form == 2)
		tab = ft_draw_tetri_t_2();
	if (form == 3)
		tab = ft_draw_tetri_t_3();
	if (form == 4)
		tab = ft_draw_tetri_t_4();
	return (tab);
}
