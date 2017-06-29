/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   letter_cap_w.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irhett <irhett@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/28 22:48:04 by irhett            #+#    #+#             */
/*   Updated: 2017/06/28 22:48:30 by irhett           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "trash_grid.h"

void	letter_cap_w(t_letter **l)
{
	int		etter;
	int		i;

	etter = letter_pos('W');
	l[etter] = (t_letter*)malloc(sizeof(t_letter));
	l[etter]->width = 9;
	l[etter]->dots = (char**)malloc(sizeof(char*) * 8);
	l[etter]->dots[0] = ft_strnew(9 + 1);
	ft_memcpy(l[etter]->dots[0], "9", 9);
	l[etter]->dots[1] = ft_strnew(9 + 1);
	ft_memcpy(l[etter]->dots[1], "100000001", 9);
	l[etter]->dots[2] = ft_strnew(9 + 1);
	ft_memcpy(l[etter]->dots[2], "100000001", 9);
	l[etter]->dots[3] = ft_strnew(9 + 1);
	ft_memcpy(l[etter]->dots[3], "100000001", 9);
	l[etter]->dots[4] = ft_strnew(9 + 1);
	ft_memcpy(l[etter]->dots[4], "100000001", 9);
	l[etter]->dots[5] = ft_strnew(9 + 1);
	ft_memcpy(l[etter]->dots[5], "100010001", 9);
	l[etter]->dots[6] = ft_strnew(9 + 1);
	ft_memcpy(l[etter]->dots[6], "100101001", 9);
	l[etter]->dots[7] = ft_strnew(9 + 1);
	ft_memcpy(l[etter]->dots[7], "101000101", 9);
}
