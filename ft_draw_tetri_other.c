/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw_tetri_other.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalexan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/06 11:25:14 by baalexan          #+#    #+#             */
/*   Updated: 2016/01/14 14:07:21 by baalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int		*ft_draw_tetri_other_1(void)
{
	int *tab;

	tab = (int *)malloc(sizeof(int) * 3);
	tab[0] = 1;
	tab[1] = 4;
	tab[2] = 1;
	return (tab);
}

static int		*ft_draw_tetri_other_2(void)
{
	int *tab;

	tab = (int *)malloc(sizeof(int) * 3);
	tab[0] = 5;
	tab[1] = 5;
	tab[2] = 5;
	return (tab);
}

static int		*ft_draw_tetri_other_3(void)
{
	int *tab;

	tab = (int *)malloc(sizeof(int) * 3);
	tab[0] = 1;
	tab[1] = 1;
	tab[2] = 1;
	return (tab);
}

int				*ft_draw_tetri_other(int form)
{
	int *result;

	if (form == 13)
		result = ft_draw_tetri_other_1();
	if (form == 14)
		result = ft_draw_tetri_other_2();
	if (form == 15)
		result = ft_draw_tetri_other_3();
	return (result);
}
