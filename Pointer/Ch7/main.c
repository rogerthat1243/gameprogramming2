/*
* 작성일: 2025.03.21
* 작성자: 김현우
* 주제: 구조체로 게임 만들기
*/

/*
* 포인터 - 주소를 이용할 수 있게 되었다.
*/

/*
* 구조체 : 사용자 정의 자료형
*/

/*
* 게임에 사용할 함수 구현
* Player - Item - Enemy
*/

/*
* 기능
* 1. 이동 구현
* 2. 상호작용 구현
*/

#include "Player.h"

int main()
{
	// 플레이어의 기본 데이터 설정
	
	COORD playerPos = { 0,0 };
	Player player = { "모험가", playerPos };		// 이름과 좌표

	COORD itemAPos = { 5,5 };
	Item itemA = { "아이템A", itemAPos, false }; // 이름, 좌표, 획득 여부

	COORD itemBPos = { 10, 10 };
	Item itemB = { "아이템B", itemBPos, false };

	Item GameItems[2] = { itemA,itemB };		// item배열을 가져와서 사용하는 함수

	while (true)
	{
		system("cls");
		GetPlayerInput(&player);
		ShowPlayer(&player);

		GoXYCOORD(itemAPos);
		printf("■");

		InteractWithItem(&player, &itemA);
		//ShowPlayerItemInfo(&itemA);
		ShowPlayerAllItemInfo(&GameItems, 2);

		// 배열을 매개변수로 받아와서 각각의 데이터에 접근한다.

		Sleep(100);
	}

}