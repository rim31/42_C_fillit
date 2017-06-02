/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_tetri.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalexan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/18 10:32:10 by baalexan          #+#    #+#             */
/*   Updated: 2016/01/18 10:37:21 by baalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_check_hpn(char *str, int nbr)
{
	int i;
	int	point;
	int	bsn;
	int hash;

	i = 0;
	point = 0;
	bsn = 0;
	hash = 0;
	while (str[i] != 0)
	{
		if (str[i] == '.')
			point++;
		if (str[i] == '#')
			hash++;
		if (str[i] == '\n')
			bsn++;
		i++;
	}
	if (hash != nbr * 4 || point != nbr * 12 || bsn != (nbr * 5 - 1))
		ft_error();
}
