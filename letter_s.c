/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   letter_s.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irhett <irhett@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/28 22:16:59 by irhett            #+#    #+#             */
/*   Updated: 2017/06/28 22:17:00 by irhett           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "trash_grid.h"

void	letter_s(t_letter **l)
{
	int		etter;
	int		i;

	etter = letter_pos('s');
	l[etter] = (t_letter*)malloc(sizeof(t_letter));
	l[etter]->width = 5;
	l[etter]->dots = (char**)malloc(sizeof(char*) * 8);
	l[etter]->dots[0] = ft_strnew(5 + 1);
	ft_memcpy(l[etter]->dots[0], "5", 5);
	l[etter]->dots[1] = ft_strnew(5 + 1);
	ft_memcpy(l[etter]->dots[1], "00000", 5);
	l[etter]->dots[2] = ft_strnew(5 + 1);
	ft_memcpy(l[etter]->dots[2], "00000", 5);
	l[etter]->dots[3] = ft_strnew(5 + 1);
	ft_memcpy(l[etter]->dots[3], "01110", 5);
	l[etter]->dots[4] = ft_strnew(5 + 1);
	ft_memcpy(l[etter]->dots[4], "10001", 5);
	l[etter]->dots[5] = ft_strnew(5 + 1);
	ft_memcpy(l[etter]->dots[5], "01100", 5);
	l[etter]->dots[6] = ft_strnew(5 + 1);
	ft_memcpy(l[etter]->dots[6], "00110", 5);
	l[etter]->dots[7] = ft_strnew(5 + 1);
	ft_memcpy(l[etter]->dots[7], "10001", 5);
}