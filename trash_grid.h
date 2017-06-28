/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trash_grid.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irhett <irhett@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/27 21:56:27 by irhett            #+#    #+#             */
/*   Updated: 2017/06/27 22:38:10 by irhett           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TRASH_GRID_H
# define TRASH_GRID_H


typedef struct  s_grid
{
	int           **pixels;
	int           width;
	int           height;
}               t_grid;

t_grid		grid;


void	function(void);

#endif
