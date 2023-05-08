#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int Group();

int main()
{
	int N = 0;
	int count = 0;

	scanf("%d", &N);
	getchar();

	for (int i = 0; i < N; i++)
	{
		count += Group();
	}
	printf("%d", count);
	return 0;
}

int Group()
{
	char str[100];
	gets(str);
	int i = 1;

	if (str[1] == '\0')
	{
		return 1;
	}

	while (1)
	{
		if (str[i] == '\0')
		{
			break;
		}
		if (str[i] != str[i - 1])
		{
			for (int j = 0; j <= i - 1; j++)
			{
				if (str[i] == str[j])
				{
					return 0;
				}
			}
		}
		i++;
	}

	return 1;
}