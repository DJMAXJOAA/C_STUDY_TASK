/*
Q2. 다음 식을 만족하는 모든 A와 Z를 구하는 프로그램을 작성하라
  A Z   6 3
+ Z A   3 6
-----------------
  N N   9 9 → 단 N은 10 미만
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