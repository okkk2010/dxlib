#pragma once


class header
{

	int x, y;
	float move;
	VECTOR pixelVector;

private :
	void setX(int _x) { x = _x; }
	void setY(int _y) { y = _y; }

	int getX() { return x; }
	int getY() { return y; }

public : 
	void setLocation(int _x, int _y);

	void drawPixel();
};




