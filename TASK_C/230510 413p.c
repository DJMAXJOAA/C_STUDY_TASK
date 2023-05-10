#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
	int count = 1;
	int arr[5][6] = { 0 };
	int total = 0;

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			arr[i][j] = count++;
		}
	}
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			arr[4][i] += arr[j][i];
		}
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			arr[i][5] += arr[i][j];
		}
		arr[4][5] += arr[i][5];
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			printf("%3d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}