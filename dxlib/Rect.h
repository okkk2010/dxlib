#pragma once
class Rect
{

public:
	struct objectFrame
	{
		float leftX, topY, rightX, bottomY;
		float width, height;

		float radius;

	}frame;

	void setFrame(objectFrame frame) { this->frame = frame; }
	void setLeftX(float leftX) { this->frame.leftX = leftX; }
	void setTopY(float topY) { this->frame.topY = topY; }
	void setRightX(float rightX) { this->frame.rightX = rightX; }
	void setBottomY(float bottomY) { this->frame.bottomY = bottomY; }

	objectFrame getFrame() { return this->frame; }
	float getLeftX() { return this->frame.leftX; }
	float getTopY() { return this->frame.topY; }
	float getRightX() { return this->frame.rightX; }
	float getBottomY() { return this->frame.bottomY; }
	float getWidth() { return this->frame.width; }
	float getHeight() { return this->frame.height; }

	objectFrame makeFrame(float x, float y, float width, float height);
};

