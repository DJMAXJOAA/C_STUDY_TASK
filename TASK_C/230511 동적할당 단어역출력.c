#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char arr[80] = "I am happy";

	while (1)
	{
		printf("문자열 입력 : ");
		gets(arr);
		if (strcmp(arr, "Quit") == 0)
		{
			return 0;
		}

		int count = 1;
		int a = 1;
		char* parr = arr;

		while (*parr != '\0')
		{
			count++;
			if (*parr == ' ')
			{
				a++;
			}
			parr++;
		}

		char** pi = (char**)malloc(sizeof(char*) * a);
		for (int i = 0; i < a; i++)
		{
			pi[i] = (char*)malloc(sizeof(char) * count);
		}

		parr = arr;

		for (int i = 0; i < a; i++)
		{
			for (int j = 0; ; j++)
			{
				if (*parr == ' ' || *parr == '\0')
				{
					pi[i][j] = ' ';
					break;
				}
				pi[i][j] = *parr;
				parr++;
			}
			parr++;
		}

		for (int i = a - 1; i >= 0; i--)
		{
			for (int j = 0; *pi[i] != ' '; j++)
			{
				printf("%c", *pi[i]);
				pi[i]++;
			}
			printf(" ");
		}

		free(pi);
		printf("\n");
	}


	return 0;
}