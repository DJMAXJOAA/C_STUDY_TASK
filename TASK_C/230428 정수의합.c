/*
Q5 두 수를 입력받아 두 수 사이에 존재하는 정수의 합을 구하는 프로그램 작성
ex ) 입력되는 수는 작은수 먼저, 큰 수 먼저 등의 규칙은 없다
3 5 or 5 3 입력되었을 때
결과 3 + 4 + 5 => 12
*/

#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int main()
{
	int a, b;
	int sum = 0;
	printf("두 수를 입력하세요. : ");
	scanf_s("%d %d", &a, &b);

	printf("결과 : ");

	if (a>=b)
	{
		for (int i = b; i <= a; i++)
		{
			printf("%d ", i);
			sum += i;
		}
	}
	else
	{
		for (int i = a; i <= b; i++)
		{
			printf("%d ", i);
			sum += i;
		}
	}

	printf("=> %d", sum);

	return 0;
}