/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   letter_l.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irhett <irhett@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/28 22:48:12 by irhett            #+#    #+#             */
/*   Updated: 2017/06/28 22:48:30 by irhett           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "trash_grid.h"

void	letter_l(t_letter **l)
{
	int		etter;
	int		i;

	etter = letter_pos('l');
	l[etter] = (t_letter*)malloc(sizeof(t_letter));
	l[etter]->width = 2;
	l[etter]->dots = (char**)malloc(sizeof(char*) * 8);
	l[etter]->dots[0] = ft_strnew(2 + 1);
	ft_memcpy(l[etter]->dots[0], "2", 2);
	l[etter]->dots[1] = ft_strnew(2 + 1);
	ft_memcpy(l[etter]->dots[1], "00", 2);
	l[etter]->dots[2] = ft_strnew(2 + 1);
	ft_memcpy(l[etter]->dots[2], "00", 2);
	l[etter]->dots[3] = ft_strnew(2 + 1);
	ft_memcpy(l[etter]->dots[3], "10", 2);
	l[etter]->dots[4] = ft_strnew(2 + 1);
	ft_memcpy(l[etter]->dots[4], "10", 2);
	l[etter]->dots[5] = ft_strnew(2 + 1);
	ft_memcpy(l[etter]->dots[5], "10", 2);
	l[etter]->dots[6] = ft_strnew(2 + 1);
	ft_memcpy(l[etter]->dots[6], "10", 2);
	l[etter]->dots[7] = ft_strnew(2 + 1);
	ft_memcpy(l[etter]->dots[7], "10", 2);
}
