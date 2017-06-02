/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalexan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/14 18:31:15 by baalexan          #+#    #+#             */
/*   Updated: 2016/01/18 10:30:05 by baalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		**ft_init_tab(void)
{
	int **tabtest;
	int i;

	i = 1;
	tabtest = (int **)malloc(sizeof(int*) * 20);
	while (i < 20)
	{
		tabtest[i - 1] = ft_draw_tetri(i);
		i++;
	}
	tabtest[i - 1] = (int *)malloc(sizeof(int) * 1);
	tabtest[i - 1][0] = -1;
	return (tabtest);
}
