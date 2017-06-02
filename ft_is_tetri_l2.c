/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_tetri_l2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalexan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/21 17:04:11 by baalexan          #+#    #+#             */
/*   Updated: 2016/01/18 10:29:43 by baalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_is_tetri_l2(char *str, size_t begin, size_t end)
{
	while (str[begin] != '#' && begin != end)
		begin++;
	if (str[begin + 5] == '#' && begin + 5 <= end && str[begin + 9] == '#'
			&& begin + 9 <= end && str[begin + 10] == '#' && begin + 10 <= end)
		return (9);
	if (str[begin + 5] == '#' && begin + 5 <= end && str[begin + 6] == '#'
			&& begin + 6 <= end && str[begin + 7] == '#' && begin + 7 <= end)
		return (10);
	if (str[begin + 1] == '#' && begin + 1 <= end && str[begin + 5] == '#'
			&& begin + 5 <= end && str[begin + 10] == '#' && begin + 10 <= end)
		return (11);
	if (str[begin + 1] == '#' && begin + 1 <= end && str[begin + 2] == '#'
			&& begin + 2 <= end && str[begin + 7] == '#' && begin + 7 <= end)
		return (12);
	return (0);
}
