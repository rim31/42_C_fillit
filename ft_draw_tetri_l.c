/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw_tetri_l.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalexan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/05 13:31:17 by baalexan          #+#    #+#             */
/*   Updated: 2016/01/14 14:08:38 by baalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int		*ft_draw_tetri_l_1(void)
{
	int *tab;

	tab = (int *)malloc(sizeof(int) * 3);
	tab[0] = 5;
	tab[1] = 5;
	tab[2] = 1;
	return (tab);
}

static int		*ft_draw_tetri_l_2(void)
{
	int *tab;

	tab = (int *)malloc(sizeof(int) * 3);
	tab[0] = 1;
	tab[1] = 1;
	tab[2] = 3;
	return (tab);
}

static int		*ft_draw_tetri_l_3(void)
{
	int *tab;

	tab = (int *)malloc(sizeof(int) * 3);
	tab[0] = 1;
	tab[1] = 5;
	tab[2] = 5;
	return (tab);
}

static int		*ft_draw_tetri_l_4(void)
{
	int *tab;

	tab = (int *)malloc(sizeof(int) * 3);
	tab[0] = 3;
	tab[1] = 1;
	tab[2] = 1;
	return (tab);
}

int				*ft_draw_tetri_l(int form)
{
	int *result;

	if (form == 5)
		result = ft_draw_tetri_l_1();
	if (form == 6)
		result = ft_draw_tetri_l_2();
	if (form == 7)
		result = ft_draw_tetri_l_3();
	if (form == 8)
		result = ft_draw_tetri_l_4();
	return (result);
}
