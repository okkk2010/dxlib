#include "DxlibProject.h"
#include "Player.h"
#include "MathFunction.h"

using namespace std;

#define INPUT_DIRECTION_EAST  (CheckHitKey(KEY_INPUT_A))
#define INPUT_DIRECTION_WEST  (CheckHitKey(KEY_INPUT_D))
#define NONE -1


void Player::init(float _x, float _y, float _width, float _height, float _velocity)
{
	x = _x;
	y = _y;
	width = _width;
	height = _height;
	velocity = _velocity;
	drawPlayer();
}

void Player::move(float _velocity)
{
	setIsMovement();
	checkKnockWall();

	setVelocityX(_velocity);
	x += velocityX;
}

void Player::setVelocityX(float _velocity)
{
	velocityX = makeVelocityX(_velocityX);
}

float Player::makeVelocityX(float _velocity)
{
	if(INPUT_DIRECTION_EAST == true)
		return moveToLeft(_velocity)
}

float Player::moveToLeft(float _velocity)
{
	if (!getIsMovement()) return 0;
	if (checkEastWall()) return 0;

	return _velocity * -1;
}

float Player::moveToRight(float _velocity)
{
	if (!getIsMovement()) return 0;
	if (checkWestWall()) return 0;

	return _velocity;
}

bool Player::checkEastWall()
{
	return (e && isEastWall == true);
}

bool Player::checkWestWall()
{
	return (INPUT_DIRECTION_WEST == true && isWestWall == true);
}

void Player::checkInputKey()
{
	if (CheckHitKeyAll()) {
		move(velocity);
	}
	drawPlayer();
}

void Player::setIsMovement()
{
	if (INPUT_DIRECTION_EAST || INPUT_DIRECTION_WEST)
		isMovement = true;
	else
		isMovement = false;
}

void Player::checkKnockWall()
{
	if (x <= EAST_END)
		isEastWall = true;
	else
		isEastWall = false;

	if ((x + width) >= WEST_END)
		isWestWall = true;
	else
		isWestWall = false;
}

void Player::drawPlayer()
{
	DrawBoxAA(x, y, x+width, y+height, GetColor(255, 255, 255), true, 1.0);

}