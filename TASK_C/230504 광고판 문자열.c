#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

int main()
{
	char str[80] = { 0 };
	printf("���ڿ� �Է� : ");
	gets(str);

	int size = 1;

	for (int i = 0; str[i] != '\0'; i++)
	{
		size++;
	}
	str[size - 1] = ' ';	// �ι��� �ڸ��� �����̽���

	while (1)
	{
		for (int i = size; i >= 0; i--)
		{
			char temp = str[0];
			system("cls");
			puts(str);

			for (int j = 1; j < size; j++)
			{
				str[j-1] = str[j];
				if (j == size - 1)
				{
					str[j] = temp;
				}
			}
			Sleep(100);
		}
	}
	return 0;
}