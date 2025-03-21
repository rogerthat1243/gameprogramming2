#include "Player.h"

void GetPlayerInput(Player* playerPtr)
{
	if (_kbhit())
	{
		if (GetAsyncKeyState(VK_LEFT))
		{
			// player의 pos 값의 x 값을 변경
			playerPtr->pos.X -= 1;
		}
		else if (GetAsyncKeyState(VK_RIGHT))
		{
			
			playerPtr->pos.X += 1;
		}
		else if (GetAsyncKeyState(VK_UP))
		{
			
			playerPtr->pos.Y -= 1;
		}
		else if (GetAsyncKeyState(VK_DOWN))
		{
			
			playerPtr->pos.Y += 1;
		}
	}
}

// Windows.h //

void ShowPlayer(const Player* playerPtr)
{
	// x,y 좌표로 이동해서 printf한다
	// 여러 번 반복할 땐 함수로 만드는 게 좋다
	//GoXY(playerPtr->pos.X, playerPtr->pos.Y);  //GoXY(50,1) 직접 좌표 써서 할 수도 있지)
	GoXYCOORD(playerPtr->pos);
	printf("★");


}

void InteractWithItem(Player* playerPtr, Item* itemPtr)
{
	// player, Item 좌표 각각의 x,y 비교해서 두 좌표가 같으면 Item 안에 있는 HasItem True 변경해주는 코드 작성
	// 1. player 주소로부터 좌표 가져온다.  playerPtr->pos COORD
	// 2. item 주소로부터 좌표 가져온다.   itemPtr->pos COORD

	if (ComPareCOORD(playerPtr->pos, itemPtr->pos))
	{
		itemPtr->hasItem = true;

	}
}

void ShowPlayerItemInfo(Item* itemPtr)
{
	// 모든 아이템을 탐색해서 HasItemTrue인 녀석들만 정보 보여줘

	if (itemPtr->hasItem)
	{
		printf("%s  아이템을 획득했습니다. \n", itemPtr->itemName);
	}
}

void ShowPlayerAllItemInfo(Item* itemArray, int length)
{
	for (int i = 0; i < length; i++)
	{
		//(itemArray + i)  // 배열의 시작 주소에서 i 데이터 크기만 더해라
						   // item. hasitem == true 실행
						   // itemArray[i].  ,  (itemArray + i)->
		if ((itemArray+i)->hasItem == true)
		{
			printf("%s  아이템을 획득했습니다. \n", (itemArray+i)->itemName);
		}
	}
}

void GoXY(int posX, int posY)
{
	COORD pos = { posX, posY };  
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void GoXYCOORD(COORD pos)
{
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

BOOL ComPareCOORD(COORD pos1, COORD pos2)
{

	// pos1.X pos2.X 비교 - if >
	// pos1.Y pos2.Y 비교 - if >
	// 둘 다 같으면 true	  - &&
	// 아니면 false 반환   - return true, false;

	if (pos1.X == pos2.X && pos1.Y == pos2.Y)
	{
		return true;
	}
	else
	{
		return false;
	}
}
