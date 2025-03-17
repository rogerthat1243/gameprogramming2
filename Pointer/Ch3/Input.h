#pragma once

#include <stdio.h>
#include <Windows.h>

// 프렐이어의 좌표
// 왼쪽 화살표키를 누르면 x좌표 -1

void GetPlayerInput(int* playerX, int* playerY, int maxX);

void InputExample();