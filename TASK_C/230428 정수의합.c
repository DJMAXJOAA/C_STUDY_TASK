/*
Q5 �� ���� �Է¹޾� �� �� ���̿� �����ϴ� ������ ���� ���ϴ� ���α׷� �ۼ�
ex ) �ԷµǴ� ���� ������ ����, ū �� ���� ���� ��Ģ�� ����
3 5 or 5 3 �ԷµǾ��� ��
��� 3 + 4 + 5 => 12
*/

#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int main()
{
	int a, b;
	int sum = 0;
	printf("�� ���� �Է��ϼ���. : ");
	scanf_s("%d %d", &a, &b);

	printf("��� : ");

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