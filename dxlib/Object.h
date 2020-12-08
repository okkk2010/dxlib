#pragma once
#include "Rect.h"

class Object : public Rect
{

	float velocity;
	bool moveAble;
	
public:


	virtual void init(objectFrame rect, float velocity) = 0;
	virtual void draw() = 0;
	virtual void movement() = 0;
	virtual void upDate() = 0;

	
	void setVelocity(float velocity) { this->velocity = velocity; }
	void setMoveAble(bool moveAble)  { this->moveAble = moveAble; }


	float getVelocity() { return this->velocity; }
	bool  getMoveAble()	{ return this->moveAble; }

	



};


