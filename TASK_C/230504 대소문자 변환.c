#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char str[80] = { 0 };
	char str2[80] = { 0 };
	int change = 0;
	printf("���ڿ��� �Է����ּ���.\n");

	gets(str);

	int size = sizeof(str) / sizeof(str[0]);

	for (int i = 0; i < size; i++)
	{
		if (str[i] >= 97 && 122 >= str[i])
		{
			str[i] -= 32;
			change++;
		}
	}
	puts(str);
	printf("�ٲ� ���� �� : %d\n\n", change);
	change = 0;

	printf("���ڿ��� �Է����ּ���.\n");
	gets(str2);

	for (int i = 0; i < size; i++)
	{
		if (str2[i] >= 97 && 122 >= str2[i])
		{
			str2[i] -= 32;
			change++;
		}
		else if (str2[i] >= 65 && 90 >= str2[i])
		{
			str2[i] += 32;
			change++;
		}
	}
	puts(str2);
	printf("�ٲ� ���� �� : %d\n", change);
	change = 0;

	return 0;
}