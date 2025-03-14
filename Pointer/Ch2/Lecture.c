#pragma once
#include <stdio.h>

//전역 변수
int GameScore = 0;



void ShowLecture()
{
	printf("강의 예제 1\n");

	// 변수를 선언하고 주소를 출력
	int num1 = 10;
	int* numptr = &num1;			// 주소 = 값

	printf("값을 출력 : %d \n", num1);
	printf("주소를 출력 : %p \n\n", numptr);

	printf("강의 실습1 \n"); // 두 숫자의 값을 변경하는 함수를 구현한다.

	// int* 2개 필요하다. - int형 주소가 2개 필요
	int numA = 5;
	int numB = 6;
	printf("numA의 값 : %d, numB의 값 : %d\n", numA, numB);
	Swap(&numA, &numB);
	printf("numA의 값 : %d, numB의 값 : %d\n\n", numA, numB);

	printf("응용 예제 1\n"); // 점수를 획득하는 시스템 구현 혹은 특정 행동, 시간에 따라 증가하는 점수

	IncreaseScore(&GameScore, 10);
	IncreaseTemp(GameScore, 10);
	printf("현재 점수 : %d", GameScore);

	printf("\n\n강의 실습 2\n");

	// 변수 3개 선언
	float weight = 1.5f;
	int weaponLv = 1;
	int baseAP = 10;

	//
	//
	printf("가중치 : %f, 레벨 : %d, 기본 공격력 : %d\n", weight, weaponLv, baseAP);
	UpgradeWeapon(&weaponLv, baseAP, &weight);
	printf("가중치 : %f, 레벨 : %d, 기본 공격력 : %d\n", weight, weaponLv, baseAP);

	// 정리
	// 함수를 이용해서 값을 변경한다. 주소를 이용해서 값을 변경할 수 있다.
}

void Swap(int* a, int* b)
{
	int temp = &a;		// a는 주소인데 주소로부터 값을 가져오는 연산자(&) temp에 저장. (5 숫자가 저장)
	*a = *b;			// * 포인터 변수 = 값 : a의 주소에 값을 저장해라.   
	*b = temp;			// *b : b의 주소에 저장되어 있는 값을 불러와라
						// 1. (*b -> 6) 2. *a = 6 3. numA = 6
}

void IncreaseScore(int* score, int points)
{
	//GameScore 주소를 받아왔습니다.
	// *주소 변수 = 값;   외부에 있는 GameScore 값이 변경된다.

	*score += points;
}

void IncreaseTemp(int score, int points)
{
	score += points;
}

void UpgradeWeapon(int* weaponLv, int baseAP, float* weight)
{
	// 레벨을 1 증가 시킨다.
	// 가중치를 특정 레벨에서 변경한다.
	*weaponLv += 1;
	if (*weaponLv % 5 == 0)
	{
		*weight = *weight * 1.5f;
	}
	printf("현재 무기 공격력 : %f\n", (*weaponLv) * (weight)+baseAP);
}