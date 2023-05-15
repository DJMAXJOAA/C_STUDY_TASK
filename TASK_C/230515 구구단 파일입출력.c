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
	// 문자열 한줄 길이 - 1(마지막 개행문자 \n 1바이트) * 몇번 곱함? = 14*9

	printf("몇단을 출력? : ");
	scanf("%d", &n);

	fseek(fp, (n-2)*(length), SEEK_SET);

	printf("%d단\n", n);
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