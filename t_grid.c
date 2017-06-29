/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_grid.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irhett <irhett@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/28 23:03:02 by irhett            #+#    #+#             */
/*   Updated: 2017/06/28 23:48:18 by irhett           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "trash_grid.h"

t_grid		*init_grid(int wid, int len)
{
	t_grid			*g;
	unsigned int	i;

	g = (t_grid*)malloc(sizeof(t_grid));
	if (!g)
		return (NULL);
	g->width = wid;
	g->height = len;
	g->pixels = (unsigned int**)malloc(sizeof(unsigned int *) * wid);
	i = 0;
	while (i < wid)
	{
		g->pixels[i] = (unsigned int *)malloc(sizeof(unsigned int) * len);
		ft_bzero(g->pixels[i], sizeof(unsigned int) * len);
		i++;
	}
	return (g);
}

void		del_grid(t_grid *g)
{
	unsigned int	i;

	i = 0;
	if (g)
	{
		while (i < g->width)
			free(g->pixels[i++]);
		free(g->pixels);
		free(g);
	}
}
