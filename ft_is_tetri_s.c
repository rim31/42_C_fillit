/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_tetri_s.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oseng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/14 09:28:49 by oseng             #+#    #+#             */
/*   Updated: 2016/01/14 16:52:08 by baalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_is_tetri_s(char *str, size_t begin, size_t end)
{
	while (str[begin] != '#' && begin != end)
		begin++;
	if (str[begin + 1] == '#' && begin + 1 <= end && str[begin + 6] == '#'
			&& begin + 6 <= end && str[begin + 7] == '#' && begin + 7 <= end)
		return (16);
	if (str[begin + 1] == '#' && begin + 1 <= end && str[begin + 4] == '#'
			&& begin + 4 <= end && str[begin + 5] == '#' && begin + 5 <= end)
		return (17);
	if (str[begin + 5] == '#' && begin + 5 <= end && str[begin + 6] == '#'
			&& begin + 6 <= end && str[begin + 11] == '#' && begin + 11 <= end)
		return (18);
	if (str[begin + 4] == '#' && begin + 4 <= end && str[begin + 5] == '#'
			&& begin + 5 <= end && str[begin + 9] == '#' && begin + 9 <= end)
		return (19);
	return (0);
}
