/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oseng <oseng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/18 10:42:42 by baalexan          #+#    #+#             */
/*   Updated: 2016/05/18 10:22:16 by oseng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int		ft_place(char *sol, int a, int **save, int i)
{
	if (sol[a] == '.' && sol[a + save[i][0]] == '.'
			&& sol[a + save[i][0] + save[i][1]] == '.'
			&& sol[a + save[i][0] + save[i][1] + save[i][2]] == '.')
		return (1);
	return (0);
}

static int		ft_algo(char *sol, int a, int **save, int i)
{
	while (save[i][0] != -1)
	{
		while (sol[a] != '\0')
		{
			if (ft_place(sol, a, save, i) == 1)
			{
				sol[a] = 'A' + i;
				sol[a + save[i][0]] = 'A' + i;
				sol[a + save[i][0] + save[i][1]] = 'A' + i;
				sol[a + save[i][0] + save[i][1] + save[i][2]] = 'A' + i;
				if (save[i][0] == -1)
					return (1);
				else
				{
					if (ft_algo(sol, 0, save, i + 1))
						return (1);
					ft_erase(i, sol);
				}
			}
			a++;
		}
		return (0);
	}
	return (1);
}

void    ft_putcolor(char *str)
{
        int i;

        i = 0;
        while (str[i])
        {
                if (str[i] == 'A' || str[i] == 'G' || str[i] == 'M' || str[i] == 'S')
                        ft_putstr("\033[31m");
                else if (str[i] == 'B' || str[i] == 'H' || str[i] == 'N')
                        ft_putstr("\033[32m");
                else if (str[i] == 'C' || str[i] == 'I' || str[i] == 'O')
                        ft_putstr("\033[33m");
                else if (str[i] == 'D' || str[i] == 'J' || str[i] == 'P')
                        ft_putstr("\033[34m");
                else if (str[i] == 'E' || str[i] == 'K' || str[i] == 'Q')
                        ft_putstr("\033[35m");
                else if (str[i] == 'F' || str[i] == 'L' || str[i] == 'R')
                        ft_putstr("\033[36m");
                else
                        ft_putstr("\033[0m");
                ft_putchar(str[i]);
                i++;
        }
        ft_putstr("\033]0m");
}

void			ft_solv(char *sol, int **save)
{
	int x;

	x = ft_size(ft_strlen_int(save));
	while (1)
	{
		if (ft_algo(sol, 0, save, 0))
			break ;
		x++;
		sol = ft_empty_sq(x);
		save = ft_resize_one(save);
	}
	ft_putcolor(sol);
	free(sol);
	exit(1);
}
