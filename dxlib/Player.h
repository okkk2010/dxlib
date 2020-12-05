#pragma once
class Player
{
	enum wall
	{
		eastWall,
		westWall,
		northWall,
		southWall
	};

	float x, y, width, height;
	float velocity, velocityX, velocityY;
	bool isEastWall, isWestWall, isMovement;

public :
	Player() { x = WIDTH / 2, y = HEIGHT / 2, width = 100, height = 10, velocity = 20, isEastWall = false, isWestWall = false; }


	void init(float _x, float _y, float _width, float _height, float _velocity);

	void setX(float _x) { x = _x; }
	void setY(float _y) { y = _y; }
	void setVelocityX(float _velocityX);
	void setVelocityY(float _velocityY);
	void setIsMovement();
	void move(float _velocity);
	void checkInputKey();

	float getX() { return x; }
	float getY() { return y; }
	float getVelocityX() { return velocityX; }
	float getVelocityY() { return velocityY; }
	bool getIsMovement() { return isMovement; }

	float makeVelocityX(float _velocityX);

	float moveToLeft(float _velocity);
	float moveToRight(float _velocity);


	void checkKnockWall();
	
	bool checkWestWall();
	bool checkEastWall();

	void drawPlayer();
};

