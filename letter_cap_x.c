/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   letter_cap_x.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irhett <irhett@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/28 22:48:05 by irhett            #+#    #+#             */
/*   Updated: 2017/06/28 22:48:30 by irhett           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "trash_grid.h"

void	letter_cap_x(t_letter **l)
{
	int		etter;
	int		i;

	etter = letter_pos('X');
	l[etter] = (t_letter*)malloc(sizeof(t_letter));
	l[etter]->width = 7;
	l[etter]->dots = (char**)malloc(sizeof(char*) * 8);
	l[etter]->dots[0] = ft_strnew(7 + 1);
	ft_memcpy(l[etter]->dots[0], "7", 7);
	l[etter]->dots[1] = ft_strnew(7 + 1);
	ft_memcpy(l[etter]->dots[1], "1000001", 7);
	l[etter]->dots[2] = ft_strnew(7 + 1);
	ft_memcpy(l[etter]->dots[2], "0100010", 7);
	l[etter]->dots[3] = ft_strnew(7 + 1);
	ft_memcpy(l[etter]->dots[3], "0010100", 7);
	l[etter]->dots[4] = ft_strnew(7 + 1);
	ft_memcpy(l[etter]->dots[4], "0001000", 7);
	l[etter]->dots[5] = ft_strnew(7 + 1);
	ft_memcpy(l[etter]->dots[5], "0010100", 7);
	l[etter]->dots[6] = ft_strnew(7 + 1);
	ft_memcpy(l[etter]->dots[6], "0100010", 7);
	l[etter]->dots[7] = ft_strnew(7 + 1);
	ft_memcpy(l[etter]->dots[7], "1000001", 7);
}
