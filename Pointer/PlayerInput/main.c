// 뭐 만들지?
// 이걸 메인에서 실행하는 게 아니라 헤더에서 실행하도록

#include "playerInput.h"

int main()
{
	int playerX = 0;
	int playerY = 0;

	while (1)
	{
		if (_kbhit())
		{
			if(GetAsyncKeyState(VK_LEFT)) // 왼쪽 화살표를 입력 했을 때
		}
	}
}