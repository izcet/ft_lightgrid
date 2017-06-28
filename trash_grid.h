/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trash_grid.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irhett <irhett@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/27 21:56:27 by irhett            #+#    #+#             */
/*   Updated: 2017/06/27 22:20:07 by irhett           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TRASH_GRID_H
# define TRASH_GRID_H

//# include "SPI.h"
//# include "Adafruit_WS2801.h"

/*uint8_t dataPin  = 5;
uint8_t clockPin = 6;

uint16_t rows = 16;
uint16_t cols = 8;

Adafruit_WS2801 strip; // = Adafruit_WS2801(rows, cols, dataPin, clockPin);

typedef struct  s_grid
{
	int           **pixels;
	int           width;
	int           height;
}               t_grid;

t_grid		grid;
*/
/*uint32_t Color(byte r, byte g, byte b)
{
	uint32_t c;

	c = r;
	c <<= 8;
	c |= g;
	c <<= 8;
	c |= b;
	return (c);
}

uint32_t Wheel(byte WheelPos)
{
	if (WheelPos < 85)
	{
		return (Color(WheelPos * 3, 255 - WheelPos * 3, 0));
	}
	else if (WheelPos < 170)
	{
		WheelPos -= 85;
		return (Color(255 - WheelPos * 3, 0, WheelPos * 3));
	}
	else
	{
		WheelPos -= 170;
		return (Color(0, WheelPos * 3, 255 - WheelPos * 3));
	}
}*/

void	function(void);

#endif
