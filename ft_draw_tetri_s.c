/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw_tetri_s.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalexan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/06 11:29:47 by baalexan          #+#    #+#             */
/*   Updated: 2016/01/14 14:07:58 by baalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int		*ft_draw_tetri_s_1(void)
{
	int *tab;

	tab = (int *)malloc(sizeof(int) * 3);
	tab[0] = 1;
	tab[1] = 5;
	tab[2] = 1;
	return (tab);
}

static int		*ft_draw_tetri_s_2(void)
{
	int *tab;

	tab = (int *)malloc(sizeof(int) * 3);
	tab[0] = 1;
	tab[1] = 3;
	tab[2] = 1;
	return (tab);
}

static int		*ft_draw_tetri_s_3(void)
{
	int *tab;

	tab = (int *)malloc(sizeof(int) * 3);
	tab[0] = 5;
	tab[1] = 1;
	tab[2] = 5;
	return (tab);
}

static int		*ft_draw_tetri_s_4(void)
{
	int *tab;

	tab = (int *)malloc(sizeof(int) * 3);
	tab[0] = 4;
	tab[1] = 1;
	tab[2] = 4;
	return (tab);
}

int				*ft_draw_tetri_s(int form)
{
	int *tab;

	if (form == 16)
		tab = ft_draw_tetri_s_1();
	if (form == 17)
		tab = ft_draw_tetri_s_2();
	if (form == 18)
		tab = ft_draw_tetri_s_3();
	if (form == 19)
		tab = ft_draw_tetri_s_4();
	return (tab);
}
