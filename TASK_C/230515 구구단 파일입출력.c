#define _CRT_SECURE_NO_WARNINGS
#define Multiply_Count 9;
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	FILE* fp;
	int n;
	char str[20];

	fp = fopen("99.txt", "w+");
	if (fp == NULL)
	{
		return 1;
	}

	for (int i = 2; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			fprintf(fp, "%2d * %2d = %2d\n", i, j, i * j);
		}
	}
	
	const int length = (strlen("%2d * %2d = %2d") - 1) * Multiply_Count;
	// ���ڿ� ���� ���� - 1(������ ���๮�� \n 1����Ʈ) * ��� ����? = 14*9

	printf("����� ���? : ");
	scanf("%d", &n);

	fseek(fp, (n-2)*(length), SEEK_SET);

	printf("%d��\n", n);
	printf("===========================================\n");
	for (int i = 0; i < 9; i++)
	{
		fgets(str, sizeof(str), fp);
		printf("%s", str);
	}
	printf("===========================================\n");

	fclose(fp);
	return 0;
}