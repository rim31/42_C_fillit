/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_file_tetriminos.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalexan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 12:51:01 by baalexan          #+#    #+#             */
/*   Updated: 2016/01/14 14:04:32 by baalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*ft_save_file(int file)
{
	char	buffer[547];
	int		bytes_read;
	int		i;
	char	*str;

	i = 0;
	bytes_read = 0;
	bytes_read = read(file, buffer, sizeof(buffer));
	if (bytes_read > 546 && bytes_read < 21)
		ft_error();
	while (i <= bytes_read)
		i++;
	if ((str = ft_memalloc(i + 1)) == NULL)
		ft_error();
	i = 0;
	while (i <= bytes_read)
	{
		str[i] = buffer[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
