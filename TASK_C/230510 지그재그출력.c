#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int count = 1;
	int i = 0, j = 0;
	int sum = 0;
	int arr[100][100] = { 0 };
	const int N = 10;
	int reverse = 0;	// 방향 전환

	/* 초기값 설정 */
	arr[i][j] = count;
	count++;
	j++;
	sum = j;

	while (count < N*N)	
	{
		if (i > j)
		{
			while (1)
			{
				arr[i][j] = count;
				count++;
				if (sum == j)
				{
					break;
				}
				i--;
				j++;
			}
			if (reverse == 0) j++;
			else if (reverse == 1) i++;
			if (j == N && reverse == 0)
			{
				j--;
				i++;
				sum = j;
				reverse = 1;
			}
			sum = j;
		}

		else if(i<j)
		{
			while (1)
			{
				arr[i][j] = count;
				count++;
				if (sum == i)
				{
					break;
				}
				i++;
				j--;
			}
			if (reverse == 0) i++;
			else if (reverse == 1) j++;
			if (i == N && reverse == 0)
			{
				i--;
				j++;
				sum = i;
				reverse = 1;
			}
			sum = i;
		}
	}
	/* 마지막 값 설정*/
	arr[N - 1][N - 1] = N * N;


	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			printf("%3d ", arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}