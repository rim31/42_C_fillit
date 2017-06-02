/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_tetri_l.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalexan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/21 17:03:58 by baalexan          #+#    #+#             */
/*   Updated: 2016/01/14 16:49:34 by baalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_is_tetri_l(char *str, size_t begin, size_t end)
{
	while (str[begin] != '#' && begin != end)
		begin++;
	if (str[begin + 5] == '#' && begin + 5 <= end && str[begin + 10] == '#'
			&& begin + 10 <= end && str[begin + 11] == '#' && begin + 11 <= end)
		return (5);
	if (str[begin + 1] == '#' && begin + 1 <= end && str[begin + 2] == '#'
			&& begin + 2 <= end && str[begin + 5] == '#' && begin + 5 <= end)
		return (6);
	if (str[begin + 1] == '#' && begin + 1 <= end && str[begin + 6] == '#'
			&& begin + 6 <= end && str[begin + 11] == '#' && begin + 11 <= end)
		return (7);
	if (str[begin + 3] == '#' && begin + 3 <= end && str[begin + 4] == '#'
			&& begin + 4 <= end && str[begin + 5] == '#' && begin + 5 <= end)
		return (8);
	return (0);
}
