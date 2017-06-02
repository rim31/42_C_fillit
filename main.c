/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalexan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 12:36:51 by baalexan          #+#    #+#             */
/*   Updated: 2016/01/18 11:03:54 by baalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		main(int argc, const char *argv[])
{
	int		file;
	char	*str;

	file = 0;
	if (argc == 0 || argc > 2)
		ft_error();
	file = open(argv[1], O_RDONLY);
	if (file == -1)
		ft_error();
	str = ft_save_file(file);
	close(file);
	ft_check(str);
	return (0);
}
