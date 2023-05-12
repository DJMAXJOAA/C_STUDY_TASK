#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int* prime_number = {0};
	int n = 20;
	
	while (1)
	{
		printf("�� �Է� (���� 0) : ");
		scanf("%d", &n);

		/* �迭 ���� �Ҵ� */
		prime_number = (char*)malloc(sizeof(int) * n);
		if (prime_number == NULL || n == 0)
		{
			free(prime_number);
			exit(1);
		}
		printf("%d", strlen(prime_number));

		/* �Ҽ� ���� */
		prime_number[0] = 2;
		for (int i = 2; i < n + 2; i++)
		{
			for (int j = 2; j < i; j++)
			{
				if (i % j == 0)
				{
					prime_number[i - 2] = 0;
					break;
				}
				prime_number[i - 2] = j + 1;
			}

		}

		/* ���ٿ� 5������ �Ҽ�, X ��� */
		int count = 0;
		for (int i = 0; i < n - 1; i++)
		{
			if (count % 5 == 0)
			{
				printf("\n");
			}
			if (prime_number[i] == 0)
			{
				printf("%3c", 'X');
			}
			else
			{
				printf("%3d", prime_number[i]);
			}
			count++;
		}
		printf("\n\n");

		free(prime_number);
	}
	return 0;
}
