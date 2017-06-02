/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_empty_sq.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oseng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/06 15:20:54 by oseng             #+#    #+#             */
/*   Updated: 2016/01/14 14:02:43 by baalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char			*ft_empty_sq(int nb)
{
	char	*sol;
	int		i;
	int		max;

	max = nb * (nb + 1);
	i = 1;
	sol = NULL;
	if (!(sol = (char*)malloc(sizeof(char) * (nb * (nb + 1) + 1))))
		return (NULL);
	while (i < max)
	{
		sol[i - 1] = '.';
		i++;
		if (i % (nb + 1) == 0)
		{
			sol[i - 1] = '\n';
			i++;
		}
	}
	sol[i - 1] = '\0';
	return (sol);
}
