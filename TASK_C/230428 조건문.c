/*
Q2. �� ���� ������ �Է¹޾� �� ���� ���� ����ϴ� ���α׷��� �ۼ��϶�.
��, ������ ū ������ ���� ���� ���� �Ѵ�.

ex > 12 5		-> 7
	 4 16		-> 12

case1. if~else ���� �̿��Ͽ� �ۼ�
case2. ���ǿ����ڸ� �̿��ؼ� �ۼ�
*/

#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

//case1. if~else ���� �̿��Ͽ� �ۼ�
//int main()
//{
//	int a, b;
//	int result = 0;
//
//	printf("�ΰ��� �������� �Է��ϼ��� : ");
//	scanf_s("%d %d", &a, &b);
//
//	if (a>=b)
//	{
//		result = a - b;
//		printf("�� ���� �� : %d\n", result);
//	}
//	else
//	{
//		result = b - a;
//		printf("�� ���� �� : %d\n", result);
//	}
//
//	return 0;
//}

//case2. ���ǿ����ڸ� �̿��ؼ� �ۼ�
int main()
{
	int a, b;
	int result;

	printf("�ΰ��� �������� �Է��ϼ��� : ");
	scanf_s("%d %d", &a, &b);

	result = (a >= b) ? (a - b) : (b - a);
	printf("�� ���� �� : %d\n", result);

	return 0;
}