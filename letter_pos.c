/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   letter_pos.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irhett <irhett@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/28 21:44:33 by irhett            #+#    #+#             */
/*   Updated: 2017/06/28 21:46:09 by irhett           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "trash_grid.h"

int		letter_pos(char c)
{
	if (ft_isupper(c))
		return (c - 'A');
	else if (ft_islower(c))
		return (c - 'a');
	else
		return (-1);
}
