#include "GameManager.h"
#include "Object.h"


void GameManager::initWithObject()
{
	Rect rect;

	Player player;
	player.init(rect.makeFrame(10, 10, 100, 100), 20);

	vec.push_back(player);
}

void GameManager::objectUpDate()
{
	vector<Player>::iterator iter;

	for (iter = vec.begin(); iter != vec.end(); ++iter) {
		iter->upDate();
	}
}