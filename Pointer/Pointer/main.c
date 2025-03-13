/*
* �ۼ���: 2025.03.13
* �ۼ���: ������
* ����: �����Ϳ� ����
*/

/*
* �����Ͱ� �����ΰ�/
* �����ʹ� �ּ��̴�.
* ������ ����: � �����͸� �����ϴ°�, �������� ũ��� ��� �Ǵ°�?
* ��ǻ���� ����: �̸����� ������ ȣ���Ѵ�. �ּҸ� ����Ѵ�.
*/

/*
* ������ ����
* int number;		number ������ ���� ������ �� �ִ�. number�� �ּҸ� ������ �ִ�.
* �ּ� �����ڸ� ����ؼ� ������ ����ִ� �ּҸ� ����� �� �ִ�. &number;
* ������ ��: &�� ���� �������� �ּҸ� ����������! = X (�ּ� �����ڴ� ������ ����ǰ� �� ���Ŀ� ����ؾ� �Ѵ�.)
* 
* ������ ������ ������ �� ����ϴ� ��ȣ
* ������ ������: int* pointerNumber;
* ������ ������ ����ǰ� �� ���Ŀ� ���Ǵ� ��ȣ
* ������ ������:  *pointerNumber;
*/

/*
* �����͸� ��� ����ϸ� ������/
* 
* ��ǻ�� �ȿ� �޸𸮸� �����ϴ� ����. �޸� �ּҷ� ������ �ϰ� �־���.
* �ּҸ� �˰� ������ ���� ��𼭳� ���� ������ �� �ִ�.
* 
* - ����?		������ ����� �ΰ� ����� �߾�� �Ѵ�. ���α׷� ���� �߿� �޸𸮸� �Ҵ��ϰ� ����ϴ� ��� - ���� �Ҵ�
* - ���?		�Լ����� ����� ���� �ܺο� ������ �� �ȴ�. Call By Reference
*/

/*
* ����
* ��ǻ���� �ּҸ� ��� ���
*	1. ������ ������ �����ϴ� ���	int* ������ ���� �̸�;
*	2. �����κ��� �ּҸ� �������� ��� - �ּҿ�����	int number = 10;  &number;
*	3. �ּҷκ��� ���� �������� ���		int*	numptr;		*numptr;
*/

#include <stdio.h>

// Call by Value vs Call by Reference

void CallValue(int number)
{
	number = 100;
}

void CallReference(int* numberPtr)
{
	//		| - Value		'=' R - Value
	//		int �ּ�			int
	// 16���� 0x019451ABC		10���� ����
	// �� ���� Ÿ���� �ٸ���. ���������� ���� �������� �Ѵ�.
	numberPtr = 100;
}

void SwapPreview(int numA, int numB)
{
	int temp; // �����͸� �ӽ� ������ ����
	temp = numA; // A�� �ӽ� ����
	numA = numB; // A�� B�� ������ �����
	numB = temp; // B�� temp������ ����(A�� �������� B�� A ������ ����)

	// �̸� ���� ����
	printf("Swap�� �ϸ� ���̷� ����� ���ɴϴ�\n");
	printf("����� numA�� �� : %d\n", numA);
	printf("����� numB�� �� : %d\n", numB);
}

// �ܺο��� ������ ���� �����ϰ� �ʹ�. -> �ּ��� ���� �����Ѵ�.
void Swap(int* numA, int* numB)
{
	int* temp = 0;
	temp = numA;
	numA = numB;
	numB = temp;
}


int main()
{
	printf("�����Ͱ� �����ΰ�?\n");

	//�ǽ� 1. �����ʹ� �����ΰ�
	int number = 10;
	printf("���� ��� : %d\n", number);
	// �����͸� ���
	printf("������ ��� : %p\n", &number);

	//�ǽ� 2. ������ ���
	// * , &
	// ������ ����
	int* pointerNumber;	// ������ ������ ����
	int num1 = 10;		// ������ ���� - �ּҰ� ���� ����
	pointerNumber = &num1; // ������ ������ ������ �ּҰ��� ����
	printf("������ ��� : %p\n", pointerNumber);
	printf("���� ��� : %d\n", *pointerNumber);

	float floatNum = 0.1f;
	float* floatPointer = &floatNum;
	// �ּҰ� ���
	// 0.1���� ��������;
	printf("�ּҰ��� ����Ѵ� : %p\n", &floatNum);
	printf("�ּҷκ��� ���� ��� : %f\n\n", *floatPointer);


	int num2 = 5;
	int* num2ptr = &num2;

	long long longNum = 100;
	long long* longNumptr = &longNum;

	printf("long long ����\n");
	printf("�ּҷκ��� ���� ����Ѵ�. : %d\n", *longNumptr);

	char charNum = 'A';
	char* charNumptr = &charNum;

	printf("�ּҰ��� ����Ѵ�. : %p\n", &charNum);
	printf("�ּҷκ��� ���� ����Ѵ�. : %c\n\n", *charNumptr);

	// Call by value, call by Reference

	printf("Call by Value, Call By Reference ����\n");

	int exampleNumber = 10;
	int* exampleNumberPtr = &exampleNumber;

	CallValue(exampleNumber);
	printf("CallValue ���� �� exampleNumber�� �� : %d\n", exampleNumber);
	CallReference(exampleNumberPtr);
	printf("CallValue ���� �� exampleNumber�� �� : %d\n\n", exampleNumber);

	// Swap�� �����غ���.
	// num1, num2, temp
	// ������ ��ȭ�Ǿ� �ִ� ���¸� ����ϰ� �ͽ��ϴ�.
	// �ѹ��� �� �� �ִ� ����� �����մϴ�.

	int weaponLv = 1;
	int weaponBaseATK = 10;

	int numA = 50;
	int numB = 60;

	SwapPreview(numA, numB);

	printf("\n���� numA, numB�� ��\n");
	printf("numA : %d, numB : %d\n\n", numA, numB);

	Swap(&numA, &numB);
	printf("Swap ���� �� \n");
	printf("���� numA, numB�� ��\n");
	printf("numA : %d, numB : %d\n", numA, numB);

}