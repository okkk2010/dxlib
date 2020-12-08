#pragma once
#include <vector>
#include "Window.h"
#include "Player.h"
using namespace std;


class GameManager
{

public:

	vector<Player> vec;

	void initWithObject();

	void objectUpDate();
};