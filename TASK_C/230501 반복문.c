/*
Q1. 1이상 100미만인 정수m과 n을 입력받아 두 수의 배수를 출력하는 프로그램을 작성하라.
단, m의 배수이면서 n의 배수인 정수는 한번만 출력해야 한다.

ex) 7 9
7 9 14 18 21 27 28 35 36... 63 .... 99
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int m, n;
	0

	for (int i = 1; i < 100; i++)
	{
		if (i % m == 0)
		{
			printf("%d ", i);
		}
		else if (i % n == 0)
		{
			printf("%d ", i);
		}
	}
	
	return 0;
}
