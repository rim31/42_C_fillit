/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalexan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/28 12:04:47 by baalexan          #+#    #+#             */
/*   Updated: 2016/01/18 10:39:12 by baalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static void		ft_check_tetri_hash(char *str, size_t begin, size_t end)
{
	size_t	i;
	int		hash;
	int		point;

	hash = 0;
	point = 0;
	i = begin;
	while (i != end)
	{
		if (str[i] == '#')
			hash++;
		i++;
	}
	if (hash != 4 && begin != 0 && end != 0)
		ft_error();
}

static int		*ft_check_tetri(char *str, size_t begin, size_t end, int pnbr)
{
	int form;
	int *tab;

	ft_check_tetri_hash(str, begin, end);
	form = 0;
	if (pnbr == -1)
		return (ft_create_tab(pnbr));
	if (!(form = ft_is_tetri_t(str, begin, end)))
		if (!(form = ft_is_tetri_other(str, begin, end)))
			if (!(form = ft_is_tetri_s(str, begin, end)))
				if (!(form = ft_is_tetri_l(str, begin, end)))
					if (!(form = ft_is_tetri_l2(str, begin, end)))
						ft_error();
	tab = ft_create_tab(form);
	return (tab);
}

static int		**ft_pre_check(char *str)
{
	int			i;
	int			pnbr;
	int			n;
	static int	*tab[26];

	i = 0;
	pnbr = 0;
	n = 5;
	while (str[i] != '\0')
	{
		while (str[i] != '\n')
			i++;
		n--;
		if ((n == 0) || (n == 1 && (size_t)i + 1 == ft_strlen(str)))
		{
			n = 5;
			tab[pnbr] = ft_check_tetri(str, i - 20, i, pnbr);
			pnbr++;
		}
		i++;
	}
	ft_check_hpn(str, pnbr);
	tab[pnbr] = ft_check_tetri(str, 0, 0, -1);
	return (tab);
}

static int		ft_check_backslashn(char *str)
{
	size_t i;
	size_t bsn;

	i = 1;
	while (str[i - 1] != '\0')
	{
		bsn = 4;
		while (str[i - 1] != '\n' && bsn > 0)
		{
			i++;
			bsn--;
		}
		if ((str[i - 1] == '\n' && bsn == 0) ||
				(i % 21 == 0 && str[i - 1] == '\n' && bsn == 4))
			i++;
		else
			ft_error();
	}
	if (bsn != 0)
		ft_error();
	return (1);
}

int				ft_check(char *str)
{
	size_t	i;
	int		**tab;
	char	*sol;
	int		test;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] != '#' && str[i] != '.' && str[i] != '\n' && str[i] != '\0')
			ft_error();
		i++;
	}
	ft_check_backslashn(str);
	tab = ft_pre_check(str);
	test = ft_size(ft_strlen_int(tab));
	tab = ft_resize(test, tab);
	sol = ft_empty_sq(test);
	ft_solv(sol, tab);
	return (1);
}
