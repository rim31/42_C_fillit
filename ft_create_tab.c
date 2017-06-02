/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_tab.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalexan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/14 14:10:41 by baalexan          #+#    #+#             */
/*   Updated: 2016/01/14 17:35:04 by baalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		*ft_create_tab(int form)
{
	size_t	i;
	int		*tab;

	i = 0;
	if (form == -1)
	{
		tab = (int *)malloc(sizeof(int) * 2);
		tab[0] = -1;
		return (tab);
	}
	tab = ft_draw_tetri(form);
	return (tab);
}
