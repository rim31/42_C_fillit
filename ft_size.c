/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_size.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalexan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/06 16:35:33 by baalexan          #+#    #+#             */
/*   Updated: 2016/01/14 14:03:30 by baalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_size(int nb)
{
	int i;

	i = 0;
	nb = 4 * nb;
	while (i * i < nb)
		i++;
	return (i);
}
