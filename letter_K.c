/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   letter_K.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irhett <irhett@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/28 22:16:16 by irhett            #+#    #+#             */
/*   Updated: 2017/06/28 22:16:17 by irhett           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "trash_grid.h"

void	letter_K(t_letter **l)
{
	int		etter;
	int		i;

	etter = letter_pos('K');
	l[etter] = (t_letter*)malloc(sizeof(t_letter));
	l[etter]->width = 6;
	l[etter]->dots = (char**)malloc(sizeof(char*) * 8);
	l[etter]->dots[0] = ft_strnew(6 + 1);
	ft_memcpy(l[etter]->dots[0], "6", 6);
	l[etter]->dots[1] = ft_strnew(6 + 1);
	ft_memcpy(l[etter]->dots[1], "100001", 6);
	l[etter]->dots[2] = ft_strnew(6 + 1);
	ft_memcpy(l[etter]->dots[2], "100010", 6);
	l[etter]->dots[3] = ft_strnew(6 + 1);
	ft_memcpy(l[etter]->dots[3], "100100", 6);
	l[etter]->dots[4] = ft_strnew(6 + 1);
	ft_memcpy(l[etter]->dots[4], "101000", 6);
	l[etter]->dots[5] = ft_strnew(6 + 1);
	ft_memcpy(l[etter]->dots[5], "110000", 6);
	l[etter]->dots[6] = ft_strnew(6 + 1);
	ft_memcpy(l[etter]->dots[6], "101000", 6);
	l[etter]->dots[7] = ft_strnew(6 + 1);
	ft_memcpy(l[etter]->dots[7], "100100", 6);
}
