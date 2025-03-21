#pragma once

#include <stdio.h>		// printf, scanf
#include <Windows.h>	// 콘솔 관련 함수
#include <conio.h>		// getch
#include <time.h>		// time
#include <stdlib.h>		// srand rand
#include <stdbool.h>	// Ture, False 선언

typedef struct
{
	char* playerName;
	COORD pos;
}Player;

typedef struct
{
	char* itemName;
	COORD pos;
	BOOL hasItem;
}Item;


void GetPlayerInput(Player* playerPtr);
void ShowPlayer(const Player* playerPtr);

void InteractWithItem(Player* playerPtr, Item* itemPtr);
void ShowPlayerItemInfo(Item* itemPtr);
void ShowPlayerAllItemInfo(Item itemArray[], int length);

void ShowAllItem(Item itemArray[], int length);

void GoXY(int x, int y);
void GoXYCOORD(COORD pos);		
//void GoXY(COORD pos);		// 원랜 위의 같은 이름의 함수를 선언하면 안 됨.

// 두개의 좌표를 매개 변수로 받아와서 비교하는 함수
BOOL ComPareCOORD(COORD pos1, COORD pos2);