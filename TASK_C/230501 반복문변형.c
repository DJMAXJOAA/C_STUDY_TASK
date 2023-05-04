/*
Q3. 임의의 수 n을 입력 받아서 다음과 같은 형태로 출력하도록 하여라
ex) n =5, n=4
*___*    *__*
**_**    ****
*****    ****
**_**    *__*
*___*
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n = 0;
	scanf_s("%d", &n);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i>=j && i+j <= n-1)
			{
				printf("*");
			}
			else if (j >= i && n - 1 <= i + j)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}

	return 0;
}