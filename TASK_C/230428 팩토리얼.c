/*
Q4. Factorial 계산, 어떤 양의 정수 n을 입력받아서
n!을 구하는 프로그램을 작성하시오.
*/

/*
1. 반복문을 용도에 맞게 나누어서 사용해보자
예를 들어서 while은 조건이 딱 정해져 있는 느낌 / for은 몇번 반복이 정해져 있을 때로 나눠서
2. 반복 시 변수를 줄일까, 올려서 구현할까? 방향성
*/

#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int main()
{
	int factorial;
	int result = 1;

	printf("n 값을 입력해 주세요 : ");
	scanf_s("%d", &factorial);
	

	while (factorial > 0)
	{
		result *= factorial;
		factorial--;
	}
	printf("%d\n", result);

	return 0;
}