/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   letter_M.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irhett <irhett@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/28 22:16:18 by irhett            #+#    #+#             */
/*   Updated: 2017/06/28 22:16:19 by irhett           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "trash_grid.h"

void	letter_M(t_letter **l)
{
	int		etter;
	int		i;

	etter = letter_pos('M');
	l[etter] = (t_letter*)malloc(sizeof(t_letter));
	l[etter]->width = 9;
	l[etter]->dots = (char**)malloc(sizeof(char*) * 8);
	l[etter]->dots[0] = ft_strnew(9 + 1);
	ft_memcpy(l[etter]->dots[0], "9", 9);
	l[etter]->dots[1] = ft_strnew(9 + 1);
	ft_memcpy(l[etter]->dots[1], "100000001", 9);
	l[etter]->dots[2] = ft_strnew(9 + 1);
	ft_memcpy(l[etter]->dots[2], "110000011", 9);
	l[etter]->dots[3] = ft_strnew(9 + 1);
	ft_memcpy(l[etter]->dots[3], "101000101", 9);
	l[etter]->dots[4] = ft_strnew(9 + 1);
	ft_memcpy(l[etter]->dots[4], "100101001", 9);
	l[etter]->dots[5] = ft_strnew(9 + 1);
	ft_memcpy(l[etter]->dots[5], "100010001", 9);
	l[etter]->dots[6] = ft_strnew(9 + 1);
	ft_memcpy(l[etter]->dots[6], "100000001", 9);
	l[etter]->dots[7] = ft_strnew(9 + 1);
	ft_memcpy(l[etter]->dots[7], "100000001", 9);
}
