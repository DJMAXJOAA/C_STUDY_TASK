/*
����ڷκ��� ���� ���� M�� N�� �Է¹޾� N�� ��ŭ M�� ����� ����ϴ�
���α׷��� �ۼ��϶�.

ex) 3 4
=> 3 6 9 12
*/

#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int main()
{
	unsigned int m, n;
	printf("���� ���� M, N�� ���� �Է��ϼ��� : ");
	scanf_s("%d %d", &m, &n);

	for (int i = 1; i <= n; i++)
	{
		printf("%d ", m * i);
	}
	return 0;
}

