/*
177p ����
�Ҽ� ��� ���α׷�
2 �̻��� ������ �Է��Ͽ� 2���� �Է��� �������� ��� �Ҽ��� ����մϴ�. 
��, �� �ٿ� 5���� 5ĭ �������� ����մϴ�.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	unsigned int prime_number;
	int isPrime = 1;
	const int isENTER = 5; // �ٹٲ� ����
	int enter = 0; // �ٹٲ� ����

	scanf("%d", &prime_number);

	for (int i = 2; i <= prime_number; i++)
	{
		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				isPrime = 0;
				break;
			}		
			isPrime = 1;
		}
		if (isPrime == 1)
		{
			printf("%2d ", i);
			enter++;
		}

		if (enter == isENTER)
		{
			printf("\n");
			enter = 0;
		}
	}
	return 0;
}