/*
Q2. 두 개의 정수를 입력받아 두 수의 차를 출력하는 프로그램을 작성하라.
단, 무조건 큰 수에서 작은 수를 빼야 한다.

ex > 12 5		-> 7
	 4 16		-> 12

case1. if~else 문을 이용하여 작성
case2. 조건연산자를 이용해서 작성
*/

#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

//case1. if~else 문을 이용하여 작성
//int main()
//{
//	int a, b;
//	int result = 0;
//
//	printf("두개의 정수값을 입력하세요 : ");
//	scanf_s("%d %d", &a, &b);
//
//	if (a>=b)
//	{
//		result = a - b;
//		printf("두 수의 차 : %d\n", result);
//	}
//	else
//	{
//		result = b - a;
//		printf("두 수의 차 : %d\n", result);
//	}
//
//	return 0;
//}

//case2. 조건연산자를 이용해서 작성
int main()
{
	int a, b;
	int result;

	printf("두개의 정수값을 입력하세요 : ");
	scanf_s("%d %d", &a, &b);

	result = (a >= b) ? (a - b) : (b - a);
	printf("두 수의 차 : %d\n", result);

	return 0;
}