/*
177p 문제
소수 출력 프로그램
2 이상의 정수를 입력하여 2부터 입력한 수까지의 모든 소수를 출력합니다. 
단, 한 줄에 5개씩 5칸 간격으로 출력합니다.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	unsigned int prime_number;
	int isPrime = 1;
	const int isENTER = 5; // 줄바꿈 변수
	int enter = 0; // 줄바꿈 판정

	scanf("%d", &prime_number);

	for (int i = 2; i <= prime_number; i++)
	{
		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				isPrime = 0;
				break;
			}		
			isPrime = 1;
		}
		if (isPrime == 1)
		{
			printf("%2d ", i);
			enter++;
		}

		if (enter == isENTER)
		{
			printf("\n");
			enter = 0;
		}
	}
	return 0;
}