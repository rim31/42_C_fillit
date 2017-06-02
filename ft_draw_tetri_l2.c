/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw_tetri_l2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalexan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/06 11:24:26 by baalexan          #+#    #+#             */
/*   Updated: 2016/01/18 10:38:04 by baalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int		*ft_draw_tetri_l2_1(void)
{
	int *tab;

	tab = (int *)malloc(sizeof(int) * 3);
	tab[0] = 5;
	tab[1] = 4;
	tab[2] = 1;
	return (tab);
}

static int		*ft_draw_tetri_l2_2(void)
{
	int *tab;

	tab = (int *)malloc(sizeof(int) * 3);
	tab[0] = 5;
	tab[1] = 1;
	tab[2] = 1;
	return (tab);
}

static int		*ft_draw_tetri_l2_3(void)
{
	int *tab;

	tab = (int *)malloc(sizeof(int) * 3);
	tab[0] = 1;
	tab[1] = 4;
	tab[2] = 5;
	return (tab);
}

static int		*ft_draw_tetri_l2_4(void)
{
	int *tab;

	tab = (int *)malloc(sizeof(int) * 3);
	tab[0] = 1;
	tab[1] = 1;
	tab[2] = 5;
	return (tab);
}

int				*ft_draw_tetri_l2(int form)
{
	int *result;

	if (form == 9)
		result = ft_draw_tetri_l2_1();
	if (form == 10)
		result = ft_draw_tetri_l2_2();
	if (form == 11)
		result = ft_draw_tetri_l2_3();
	if (form == 12)
		result = ft_draw_tetri_l2_4();
	return (result);
}
