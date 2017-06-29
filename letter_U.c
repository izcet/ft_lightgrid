/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   letter_U.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irhett <irhett@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/28 22:16:25 by irhett            #+#    #+#             */
/*   Updated: 2017/06/28 22:16:25 by irhett           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "trash_grid.h"

void	letter_U(t_letter **l)
{
	int		etter;
	int		i;

	etter = letter_pos('U');
	l[etter] = (t_letter*)malloc(sizeof(t_letter));
	l[etter]->width = 6;
	l[etter]->dots = (char**)malloc(sizeof(char*) * 8);
	l[etter]->dots[0] = ft_strnew(6 + 1);
	ft_memcpy(l[etter]->dots[0], "6", 6);
	l[etter]->dots[1] = ft_strnew(6 + 1);
	ft_memcpy(l[etter]->dots[1], "100001", 6);
	l[etter]->dots[2] = ft_strnew(6 + 1);
	ft_memcpy(l[etter]->dots[2], "100001", 6);
	l[etter]->dots[3] = ft_strnew(6 + 1);
	ft_memcpy(l[etter]->dots[3], "100001", 6);
	l[etter]->dots[4] = ft_strnew(6 + 1);
	ft_memcpy(l[etter]->dots[4], "100001", 6);
	l[etter]->dots[5] = ft_strnew(6 + 1);
	ft_memcpy(l[etter]->dots[5], "100001", 6);
	l[etter]->dots[6] = ft_strnew(6 + 1);
	ft_memcpy(l[etter]->dots[6], "100001", 6);
	l[etter]->dots[7] = ft_strnew(6 + 1);
	ft_memcpy(l[etter]->dots[7], "100001", 6);
}
