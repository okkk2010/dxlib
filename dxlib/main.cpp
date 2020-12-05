#include "DxlibProject.h"
#include "Player.h"


int WINAPI WinMain(HINSTANCE hInstace, HINSTANCE hPrevInstance, LPSTR IpCmdLine, int nCmdShow)
{

	ChangeWindowMode(true);

	if (DxLib_Init() == -1)
		return -1;
	Player player;


	while(!ProcessMessage()) {
		ClearDrawScreen();
		SetDrawScreen(DX_SCREEN_BACK);

		player.checkInputKey();

		WaitTimer(10);
		ScreenFlip();

	}

	WaitKey();

	DxLib_End();

	return 0;
}
