#include "DxLib.h"
#include "header.h"


int WINAPI WinMain(HINSTANCE hInstace, HINSTANCE hPrevInstance, LPSTR IpCmdLine, int nCmdShow)
{

	ChangeWindowMode(true);

	if (DxLib_Init() == -1)
		return -1;

	while(!ProcessMessage()) {


		if (GetMouseInput() & MOUSE_INPUT_LEFT) {
			int x, y;
			GetMousePoint(&x, &y);

			header _head{};
			_head.setLocation(x, y);
		}
	}

	WaitKey();

	DxLib_End();

	return 0;
}
