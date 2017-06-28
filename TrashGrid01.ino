/*****************************************************************************
  Example sketch for driving Adafruit WS2801 pixels!


  Designed specifically to work with the Adafruit RGB Pixels!
  12mm Bullet shape ----> https://www.adafruit.com/products/322
  12mm Flat shape   ----> https://www.adafruit.com/products/738
  36mm Square shape ----> https://www.adafruit.com/products/683

  These pixels use SPI to transmit the color data, and have built in
  high speed PWM drivers for 24 bit color per pixel
  2 pins are required to interface

  Adafruit invests time and resources providing this open source code,
  please support Adafruit and open-source hardware by purchasing
  products from Adafruit!

  Written by David Kavanagh (dkavanagh@gmail.com).
  BSD license, all text above must be included in any redistribution

 *****************************************************************************/

#include "trash_grid.h"

uint8_t dataPin  = 5;
uint8_t clockPin = 6;

uint16_t rows = 16;
uint16_t cols = 8;

Adafruit_WS2801 strip = Adafruit_WS2801(rows, cols, dataPin, clockPin);

typedef struct  s_grid
{
	int           **pixels;
	int           width;
	int           height;
}               t_grid;

t_grid		grid;

void 	setup()
{
	strip = Adafruit_WS2801(rows, cols, dataPin, clockPin);
	strip.begin();
	strip.show();
}


void 	loop()
{
	//drawX(16, 8, 50);
	//bounce(7, 6, 50);
}

void	drawGrid(t_grid g)
{

}

void drawX(uint8_t w, uint8_t h, uint8_t wait)
{
	uint16_t x, y;
	for (x=0; x<w; x++)
	{
		strip.setPixelColor(2 * x, x, 255, 0, 0);
		strip.show();
		delay(wait);
	}
	for (y=0; y<h; y++)
	{
		strip.setPixelColor(w-1-(y * 2), y, 0, 0, 255);
		strip.show();
		delay(wait);
	}

}

uint32_t Color(byte r, byte g, byte b)
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
}
