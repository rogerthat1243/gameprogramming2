/*
* 작성일: 2025.03.24
* 작성자: 김현우
* 주제: 문자열의 응용
*/

/*
* 문자열: 배열로 이루어진 문자
* string: character(char) array
* 
*/
#include "MyString.h"
#include "Player.h"

int main()
{
	//ArrayExample();

	// 1. 게임 시작

	// 플레이할 캐릭터의 이름을 설정한다. SetPlayerName
	// char에 저장을 해서 원할 때 이 데이터를 호출한다. ShowPlayerInfo

	// int, double 주소
	// 문자열(문자의 배열) 배열의 이름이 주소

	char* playerName;

	printf("플레이어의 이름을 입력해주세요\n");

	char input[50];

	scanf_s("%s", input, 50);

	SetPlayerName(playerName);

	printf("%s", playerName);
}