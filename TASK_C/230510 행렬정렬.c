#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int arr1[4][4] = {
		{1,2,3,4}, {5,6,7,8}
	};
	int arr2[3][3] = {
		{1,2,3},{4,5,6},{7,8,9}
	};

	// 1번째

	for (int i = 0; i <= 3; i++)
	{
		for (int j = 0; j <= 3; j++)
		{
			if (arr1[i][j] == 0)
			{
				printf("\n");
				break;
			}
			printf("%d ", arr1[i][j]);
			if (j == 3)
			{
				printf("\n");
			}
		}
	}

	printf("\n");

	for (int i = 0; i <= 3; i++)
	{
		for (int j = 3; j >= 0; j--)
		{
			if (arr1[j][i] != 0)
			{
				printf("%d ", arr1[j][i]);
			}
		}
		printf("\n");
	}
	printf("\n\n");


	// 2번째

	for (int i = 0; i <= 2; i++)
	{
		for (int j = 0; j <= 2; j++)
		{
			if (arr2[i][j] == 0)
			{
				printf("\n");
				break;
			}
			printf("%d ", arr2[i][j]);
			if (j == 2)
			{
				printf("\n");
			}
		}
	}

	printf("\n");

	for (int i = 0; i <= 2; i++)
	{
		for (int j = 2; j >= 0; j--)
		{
			if (arr2[j][i] != 0)
			{
				printf("%d ", arr2[j][i]);
			}
		}
		printf("\n");
	}

	return 0;
}