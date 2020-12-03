#include "DxLib.h"
#include "header.h"

void header::setLocation(int _x, int _y) 
{
	setX(_x);
	setY(_y);

	drawPixel();
}

void header::drawPixel()
{
	DrawPixel(x, y, GetColor(255, 255, 255));
}