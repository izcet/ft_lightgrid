/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   letter_cap_z.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irhett <irhett@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/28 22:48:06 by irhett            #+#    #+#             */
/*   Updated: 2017/06/28 22:48:30 by irhett           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "trash_grid.h"

void	letter_cap_z(t_letter **l)
{
	int		etter;
	int		i;

	etter = letter_pos('Z');
	l[etter] = (t_letter*)malloc(sizeof(t_letter));
	l[etter]->width = 6;
	l[etter]->dots = (char**)malloc(sizeof(char*) * 8);
	l[etter]->dots[0] = ft_strnew(6 + 1);
	ft_memcpy(l[etter]->dots[0], "6", 6);
	l[etter]->dots[1] = ft_strnew(6 + 1);
	ft_memcpy(l[etter]->dots[1], "111111", 6);
	l[etter]->dots[2] = ft_strnew(6 + 1);
	ft_memcpy(l[etter]->dots[2], "000001", 6);
	l[etter]->dots[3] = ft_strnew(6 + 1);
	ft_memcpy(l[etter]->dots[3], "000010", 6);
	l[etter]->dots[4] = ft_strnew(6 + 1);
	ft_memcpy(l[etter]->dots[4], "000100", 6);
	l[etter]->dots[5] = ft_strnew(6 + 1);
	ft_memcpy(l[etter]->dots[5], "001000", 6);
	l[etter]->dots[6] = ft_strnew(6 + 1);
	ft_memcpy(l[etter]->dots[6], "010000", 6);
	l[etter]->dots[7] = ft_strnew(6 + 1);
	ft_memcpy(l[etter]->dots[7], "100000", 6);
}
