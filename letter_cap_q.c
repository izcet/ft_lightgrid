/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   letter_cap_q.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irhett <irhett@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/28 22:48:00 by irhett            #+#    #+#             */
/*   Updated: 2017/06/28 22:48:30 by irhett           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "trash_grid.h"

void	letter_cap_q(t_letter **l)
{
	int		etter;
	int		i;

	etter = letter_pos('Q');
	l[etter] = (t_letter*)malloc(sizeof(t_letter));
	l[etter]->width = 7;
	l[etter]->dots = (char**)malloc(sizeof(char*) * 8);
	l[etter]->dots[0] = ft_strnew(7 + 1);
	ft_memcpy(l[etter]->dots[0], "7", 7);
	l[etter]->dots[1] = ft_strnew(7 + 1);
	ft_memcpy(l[etter]->dots[1], "0111100", 7);
	l[etter]->dots[2] = ft_strnew(7 + 1);
	ft_memcpy(l[etter]->dots[2], "1000010", 7);
	l[etter]->dots[3] = ft_strnew(7 + 1);
	ft_memcpy(l[etter]->dots[3], "1000010", 7);
	l[etter]->dots[4] = ft_strnew(7 + 1);
	ft_memcpy(l[etter]->dots[4], "1000010", 7);
	l[etter]->dots[5] = ft_strnew(7 + 1);
	ft_memcpy(l[etter]->dots[5], "1001010", 7);
	l[etter]->dots[6] = ft_strnew(7 + 1);
	ft_memcpy(l[etter]->dots[6], "1000110", 7);
	l[etter]->dots[7] = ft_strnew(7 + 1);
	ft_memcpy(l[etter]->dots[7], "1000010", 7);
}
