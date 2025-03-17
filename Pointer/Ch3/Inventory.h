#pragma once

// 시작할 때 인벤토리 크기 4칸
// 특정 이벤트를 통해 최대 크기 n칸으로 증가
// scanf()로 함수 구성
// 1. 인벤토리 최대 크기 증가   2. 현재 인벤토리 수

// 전역 포인터 변수

#include <stdio.h>

void ShowInventoryCount(int* inventory);

void IncreaseInventoryCount(int* inventory, int increaseCount);