/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw_tetri_l.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalexan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/05 13:18:28 by baalexan          #+#    #+#             */
/*   Updated: 2016/01/14 19:10:59 by baalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		*ft_draw_tetri(int form)
{
	int *tab;

	tab = NULL;
	if (form >= 1 && form <= 4)
		tab = ft_draw_tetri_t(form);
	else if (form >= 5 && form <= 8)
		tab = ft_draw_tetri_l(form);
	else if (form >= 9 && form <= 12)
		tab = ft_draw_tetri_l2(form);
	else if (form >= 13 && form <= 15)
		tab = ft_draw_tetri_other(form);
	else if (form >= 16 && form <= 19)
		tab = ft_draw_tetri_s(form);
	else
	{
		ft_putnbr(form);
		ft_putstr("WJEQJWEJWQ");
		ft_error();
	}
	return (tab);
}
