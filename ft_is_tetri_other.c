/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_tetri_other.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalexan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/21 17:09:47 by baalexan          #+#    #+#             */
/*   Updated: 2016/01/14 16:51:25 by baalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_is_tetri_other(char *str, size_t begin, size_t end)
{
	while (str[begin] != '#' && begin != end)
		begin++;
	if (str[begin + 1] == '#' && begin + 1 <= end && str[begin + 5] == '#'
			&& begin + 5 <= end && str[begin + 6] == '#' && begin + 6 <= end)
		return (13);
	if (str[begin + 5] == '#' && begin + 5 <= end && str[begin + 10] == '#'
			&& begin + 10 <= end && str[begin + 15] == '#' && begin + 15 <= end)
		return (14);
	if (str[begin + 1] == '#' && begin + 1 <= end && str[begin + 2] == '#'
			&& begin + 2 <= end && str[begin + 3] == '#' && begin + 3 <= end)
		return (15);
	return (0);
}
