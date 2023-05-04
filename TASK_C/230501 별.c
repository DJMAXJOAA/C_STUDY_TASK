/*
임의의 n을 입력 받아서 다음과 같은 형태로 출력하도록 하여라
ex) n = 3인 경우
*
**
***

  *
 **
***

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n = 0;
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	for (int i = 1; i <= n; i++)
	{
		for (int j = n; j - i >= 1; j--)
		{
			printf(" ");
		}
		for (int k = 1; k <= i; k++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}