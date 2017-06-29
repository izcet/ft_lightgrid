/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   del_letters.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irhett <irhett@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/28 23:25:00 by irhett            #+#    #+#             */
/*   Updated: 2017/06/28 23:47:59 by irhett           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "trash_grid.h"

static void		del_letter(t_letter *l)
{
	int i;

	i= 0;
	while (i < 8)
		free(l->dots[i]);
	free(l->dots);
	free(l);
}

void			del_letters(t_letter **upper, t_letter **lower)
{
	int		i;

	i = 0;
	while (i < 26)
	{
		del_letter(upper[i]);
		del_letter(lower[i]);
		i++;
	}
	free(upper);
	free(lower);
}
