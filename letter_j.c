/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   letter_j.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irhett <irhett@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/28 22:16:37 by irhett            #+#    #+#             */
/*   Updated: 2017/06/28 22:16:37 by irhett           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "trash_grid.h"

void	letter_j(t_letter **l)
{
	int		etter;
	int		i;

	etter = letter_pos('j');
	l[etter] = (t_letter*)malloc(sizeof(t_letter));
	l[etter]->width = 4;
	l[etter]->dots = (char**)malloc(sizeof(char*) * 8);
	l[etter]->dots[0] = ft_strnew(4 + 1);
	ft_memcpy(l[etter]->dots[0], "4", 4);
	l[etter]->dots[1] = ft_strnew(4 + 1);
	ft_memcpy(l[etter]->dots[1], "0000", 4);
	l[etter]->dots[2] = ft_strnew(4 + 1);
	ft_memcpy(l[etter]->dots[2], "0000", 4);
	l[etter]->dots[3] = ft_strnew(4 + 1);
	ft_memcpy(l[etter]->dots[3], "0001", 4);
	l[etter]->dots[4] = ft_strnew(4 + 1);
	ft_memcpy(l[etter]->dots[4], "0000", 4);
	l[etter]->dots[5] = ft_strnew(4 + 1);
	ft_memcpy(l[etter]->dots[5], "0001", 4);
	l[etter]->dots[6] = ft_strnew(4 + 1);
	ft_memcpy(l[etter]->dots[6], "0001", 4);
	l[etter]->dots[7] = ft_strnew(4 + 1);
	ft_memcpy(l[etter]->dots[7], "1001", 4);
}
