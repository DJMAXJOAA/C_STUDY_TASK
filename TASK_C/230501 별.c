/*
������ n�� �Է� �޾Ƽ� ������ ���� ���·� ����ϵ��� �Ͽ���
ex) n = 3�� ���
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