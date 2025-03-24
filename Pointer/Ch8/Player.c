#include "Player.h"


// 1. 문자 주소
// 2. 구조체 -> 문자 주소 전달




void SetPlayerName(char* playerNamePtr)
{
	printf("플레이어의 이름을 입력해주세요\n");

	char input[50];

	scanf_s("%s", input, 50);

	// string.h

	strcpy_s(playerNamePtr, 50, input); // 저장될 문자열의 주소, 저장될 문자열의 크기, 가져올 문자열의 주소
}

void ShowPlayerInfo()
{

}
