/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_tetri_t.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalexan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/21 13:54:52 by baalexan          #+#    #+#             */
/*   Updated: 2016/01/14 16:52:54 by baalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_is_tetri_t(char *str, size_t begin, size_t end)
{
	while (str[begin] != '#' && begin != end)
		begin++;
	if (str[begin + 5] == '#' && begin + 5 <= end && str[begin + 6] == '#' &&
			begin + 6 <= end && str[begin + 10] == '#' && begin + 10 <= end)
		return (1);
	if (str[begin + 4] == '#' && begin + 4 <= end && str[begin + 5] == '#'
			&& begin + 5 <= end && str[begin + 10] == '#' && begin + 10 <= end)
		return (2);
	if (str[begin + 1] == '#' && begin + 1 <= end && str[begin + 2] == '#'
			&& begin + 2 <= end && str[begin + 6] == '#' && begin + 6 <= end)
		return (3);
	if (str[begin + 4] == '#' && begin + 4 <= end && str[begin + 5] == '#'
			&& begin + 5 <= end && str[begin + 6] == '#' && begin + 6 <= end)
		return (4);
	return (0);
}
