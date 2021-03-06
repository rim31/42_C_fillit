/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_resize_one.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalexan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/14 14:04:36 by baalexan          #+#    #+#             */
/*   Updated: 2016/01/14 14:04:38 by baalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int			**ft_resize_one(int **tab)
{
	int i;
	int j;

	j = 0;
	i = 0;
	while (tab[i][0] != -1)
	{
		j = 0;
		while (j != 3)
		{
			if (tab[i][j] > 1)
				tab[i][j] = tab[i][j] + 1;
			j++;
		}
		i++;
	}
	return (tab);
}
