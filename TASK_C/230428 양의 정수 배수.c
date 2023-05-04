/*
사용자로부터 양의 정수 M과 N을 입력받아 N개 만큼 M의 배수를 출력하는
프로그램을 작성하라.

ex) 3 4
=> 3 6 9 12
*/

#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int main()
{
	unsigned int m, n;
	printf("양의 정수 M, N의 값을 입력하세요 : ");
	scanf_s("%d %d", &m, &n);

	for (int i = 1; i <= n; i++)
	{
		printf("%d ", m * i);
	}
	return 0;
}

