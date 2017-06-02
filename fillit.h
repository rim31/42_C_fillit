/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalexan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 13:02:48 by baalexan          #+#    #+#             */
/*   Updated: 2016/01/18 11:01:06 by baalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include "libft.h"
# include <stdio.h>
# include <fcntl.h>

void	ft_check_hpn(char *str, int nbr);
void	ft_solv(char *sol, int **save);
int		**ft_init_tab();
int		ft_split(char *str);
int		ft_size(int nb);
int		ft_strlen_int(int **s);
int		*ft_draw_tetri(int form);
int		*ft_draw_tetri_l(int form);
int		*ft_draw_tetri_l2(int form);
int		*ft_draw_tetri_other(int form);
int		*ft_draw_tetri_s(int form);
int		*ft_draw_tetri_t(int form);
char	*ft_empty_sq(int nb);
char	*ft_erase(int i, char *sol);
char	*ft_save_file(int file);
int		ft_check(char *str);
void	ft_error();
size_t	ft_is_tetri_l(char *str, size_t begin, size_t end);
size_t	ft_is_tetri_l2(char *str, size_t begin, size_t end);
size_t	ft_is_tetri_other(char *str, size_t begin, size_t end);
size_t	ft_is_tetri_t(char *str, size_t begin, size_t end);
size_t	ft_is_tetri_s(char *str, size_t begin, size_t end);
int		*ft_create_tab(int form);
int		**ft_resize(int nbr, int **tab);
int		**ft_resize_one(int **tab);
void	ft_putcolor(char *str);
#endif
