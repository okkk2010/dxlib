#pragma once
#include "Object.h"

class Player : public Object
{

public :

	virtual void init(objectFrame rect, float velocity);
	virtual void draw();
	virtual void upDate();
	virtual void movement();
};