/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   letter_i.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irhett <irhett@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/28 22:16:36 by irhett            #+#    #+#             */
/*   Updated: 2017/06/28 22:16:37 by irhett           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "trash_grid.h"

void	letter_i(t_letter **l)
{
	int		etter;
	int		i;

	etter = letter_pos('i');
	l[etter] = (t_letter*)malloc(sizeof(t_letter));
	l[etter]->width = 1;
	l[etter]->dots = (char**)malloc(sizeof(char*) * 8);
	l[etter]->dots[0] = ft_strnew(1 + 1);
	ft_memcpy(l[etter]->dots[0], "1", 1);
	l[etter]->dots[1] = ft_strnew(1 + 1);
	ft_memcpy(l[etter]->dots[1], "0", 1);
	l[etter]->dots[2] = ft_strnew(1 + 1);
	ft_memcpy(l[etter]->dots[2], "0", 1);
	l[etter]->dots[3] = ft_strnew(1 + 1);
	ft_memcpy(l[etter]->dots[3], "1", 1);
	l[etter]->dots[4] = ft_strnew(1 + 1);
	ft_memcpy(l[etter]->dots[4], "0", 1);
	l[etter]->dots[5] = ft_strnew(1 + 1);
	ft_memcpy(l[etter]->dots[5], "1", 1);
	l[etter]->dots[6] = ft_strnew(1 + 1);
	ft_memcpy(l[etter]->dots[6], "1", 1);
	l[etter]->dots[7] = ft_strnew(1 + 1);
	ft_memcpy(l[etter]->dots[7], "1", 1);
}
