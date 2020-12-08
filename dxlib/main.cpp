#include "GameManager.h"
#include "Object.h"

using namespace std;


int WINAPI WinMain(HINSTANCE hInstace, HINSTANCE hPrevInstance, LPSTR IpCmdLine, int nCmdShow)
{
	SetWindowSize(WIDTH, HEIGHT);
	SetGraphMode(WIDTH, HEIGHT, GetColor(0, 0, 0));
	ChangeWindowMode(true);

	if (DxLib_Init() == -1)
		return -1;
	
	GameManager* gameManager = new GameManager();
	gameManager->initWithObject();


	while(!ProcessMessage()) {
		ClearDrawScreen();
		SetDrawScreen(DX_SCREEN_BACK);

		gameManager->objectUpDate();

		WaitTimer(10);
		ScreenFlip();

	}

	WaitKey();

	DxLib_End();

	return 0;
}
