#include "Rect.h"

Rect::objectFrame Rect::makeFrame(float x, float y, float width, float height)
{
	this->frame.leftX = x;
	this->frame.topY = y;
	this->frame.rightX = x + width;
	this->frame.bottomY = y + height;
	this->frame.width = width;
	this->frame.height = height;
	if (width == height) this->frame.radius = width / 2;

	return this->frame;
}