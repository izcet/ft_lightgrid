/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TrashGrid01.ino                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irhett <irhett@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/27 22:29:00 by irhett            #+#    #+#             */
/*   Updated: 2017/06/27 22:29:00 by irhett           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SPI.h"
#include "Adafruit_WS2801.h"
#include "./trash_grid.h"

uint8_t dataPin = 5;
uint8_t clockPin = 6;

uint16_t rows = 16;
uint16_t cols = 8;

Adafruit_WS2801 strip; // = Adafruit_WS2801(rows, cols, dataPin, clockPin);


void	setup()
{
	strip = Adafruit_WS2801(rows, cols, dataPin, clockPin);
	strip.begin();
	strip.show();
}

void	loop()
{
//	drawX(16, 8, 50);
//	bounce(7, 6, 50);
	string_banner_wheel("test string please ignore");
}

void	redraw(t_grid *grid)
{
	int		x;
	int		y;

	x = 0;
	while (x < grid->width)
	{
		y = 0;
		while (y < grid->height)
		{
			strip.setPixelColor(x, y, grid->pixels[x][y]);
			y++;
		}
		x++;
	}
	strip.show();
	delay(10);
}

void	draw_blank_line(t_grid *grid)
{
	int		i;

	i = 0;
	while (i < grid->height)
	{
		grid->pixels[grid->width - 1][i] = 0;
		i++;
	}
}

void	string_banner_wheel(char *str)
{
	unsigned int	len;
	byte			color;
	unsigned int	i;
	byte			row;
	byte			col;
	t_grid			*grid;
	t_letter		**upper;
	t_letter		**lower;
	int				cl;
	int				cli;
	unsigned int	max;


	grid = init_grid(16, 8);
	upper = build_uppercase();
	lower = build_lowercase();
	color = 0;

	max = 16;
	i = 0;
	len = ft_strlen(str);
	while (i < len)
	{
		if (ft_isupper(str[i]))
			max += upper[letter_pos(str[i])]->width;
		else if (ft_islower(str[i]))
			max += lower[letter_pos(str[i])]->width;
		max++;
		i++;
	}

	cl = 0;
	cli = 0;
	i = 0;
	while (i < max)
	{
		col = -1;
		while (++col < 15)
		{
			row = -1;
			while (++row < 8)
				grid->pixels[col][row] = grid->pixels[col + 1][row];
		}
		if ((i == 0) || (i > (max - 16)))
			draw_blank_line(grid);
		else
		{
			if (letter_pos(str[cl]) < 0)
			{
				cl++;
				cli = 0;
				draw_blank_line(grid);
			}
			else if (cli < 0)
			{
				draw_blank_line(grid);
				cli = 0;
			}
			else if (ft_isupper(str[cl]))
			{
				row = -1;
				while (++row < 8)
					grid->pixels[col][row] = upper[letter_pos(str[cl])]->dots[cli][row] * Wheel(color++);
				cli++;
				if (cli == upper[letter_pos(str[cl])]->width)
				{
					cl++;
					cli = -1;
				}
			}
			else
			{
				row = -1;
				while (++row < 8)
					grid->pixels[col][row] = lower[letter_pos(str[cl])]->dots[cli][row] * Wheel(color++);
				cli++;
				if (cli == lower[letter_pos(str[cl])]->width)
				{
					cl++;
					cli = -1;
				}
			}
		}
		redraw(grid);
		i++;
	}
	del_letters(upper, lower);
	del_grid(grid);
}



void drawX(uint8_t w, uint8_t h, uint8_t wait) {
	uint16_t x, y;
	for (x=0; x<w; x++) {
		strip.setPixelColor(2 * x, x, 255, 0, 0);
		strip.show();
		delay(wait);
	}
	for (y=0; y<h; y++) {
		strip.setPixelColor(w-1-(y * 2), y, 0, 255, 0);
		strip.show();
		delay(wait);
	}

}

void bounce(uint8_t w, uint8_t h, uint8_t wait) {
	int16_t x = 1;
	int16_t y = 2;
	int8_t xdir = +1;
	int8_t ydir = -1;
	int j;
	for (j=0; j < 256; j++) {
		x = x + xdir;
		y = y + ydir;
		if (x < 0) {
			x = -x;
			xdir = - xdir;
		}
		if (y < 0) {
			y = -y;
			ydir = - ydir;
		}
		if (x == w) {
			x = w-2;
			xdir = - xdir;
		}
		if (y == h) {
			y = h-2;
			ydir = - ydir;
		}
		strip.setPixelColor(x, y, Wheel(j));
		strip.show();
		delay(wait);
		strip.setPixelColor(x, y, 0, 0, 0);
	}
}

/* Helper functions */

// Create a 24 bit color value from R,G,B
uint32_t Color(byte r, byte g, byte b)
{
	uint32_t c;
	c = r;
	c <<= 8;
	c |= g;
	c <<= 8;
	c |= b;
	return c;
}

//Input a value 0 to 255 to get a color value.
//The colours are a transition r - g -b - back to r
uint32_t Wheel(byte WheelPos)
{
	if (WheelPos < 85) {
		return Color(WheelPos * 3, 255 - WheelPos * 3, 0);
	} else if (WheelPos < 170) {
		WheelPos -= 85;
		return Color(255 - WheelPos * 3, 0, WheelPos * 3);
	} else {
		WheelPos -= 170; 
		return Color(0, WheelPos * 3, 255 - WheelPos * 3);
	}
}
