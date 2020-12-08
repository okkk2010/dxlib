#include "Window.h"
#include "Player.h"
#include "MathFunction.h"

using namespace std;

#define INPUT_DIRECTION_EAST  (CheckHitKey(KEY_INPUT_A))
#define INPUT_DIRECTION_WEST  (CheckHitKey(KEY_INPUT_D))
#define NONE -1

void Player::init(objectFrame rect, float velocity)
{
	setFrame(rect);
	setVelocity(velocity);

	draw();
}

void Player::movement()
{
	float interval = 0;

	if (INPUT_DIRECTION_EAST)	   interval = this->getVelocity() * -1;
	else if (INPUT_DIRECTION_WEST) interval = this->getVelocity();

	float coordinateLeftXToMove = this->getLeftX() + interval;
	float coordinateRightXToMove = this->getRightX() + interval;
	
	
	this->setLeftX(coordinateLeftXToMove);
	this->setRightX(coordinateRightXToMove);
}

void Player::upDate()
{
	movement();
	draw();
}

void Player::draw()
{
	DrawBoxAA(getLeftX(), getTopY(), getRightX(), getBottomY(), GetColor(255, 255, 255), true, 1.0);
}