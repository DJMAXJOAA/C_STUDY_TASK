/*
Q2. ���� ���� �����ϴ� ��� A�� Z�� ���ϴ� ���α׷��� �ۼ��϶�
  A Z   6 3
+ Z A   3 6
-----------------
  N N   9 9 �� �� N�� 10 �̸�
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	unsigned int n;
	const nLange = 10;

	scanf("%d", &n);

	for (int i = 0; i <= n; i++)
	{
		if (n >= nLange)
		{
			break;
		}
		for (int j = 0; j <= n; j++)
		{
			if (i + j == n)
			{
				printf("A = %d, Z = %d\n", i, j);
			}
		}
	}
	return 0;
}