#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int m;
	int count = 1;
	int arr[100][100] = {0,};
	printf("M값 입력 : ");
	scanf("%d", &m);

	int i = 0, j = 0;
	// i = 행, j = 열
	while (count <= m * m)
	{
		// 1. 맨위 왼쪽->오른쪽
		while (arr[i][j] == 0 && j < m)
		{
			arr[i][j] = count;
			count++;
			j++;
		}
		j--;
		i++;

		// 2. 아래
		while (arr[i][j] == 0 && i < m)
		{	
			arr[i][j] = count;
			count++;
			i++;
		}
		i--;
		j--;

		while (arr[i][j] == 0 && j >= 0)
		{
			arr[i][j] = count;
			count++;
			j--;
		}
		j++;
		i--;

		while (arr[i][j] == 0 && i >= 0)
		{
			arr[i][j] = count;
			count++;
			i--;
		}
		i++;
		j++;
	}

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < m; j++)
		{
			printf("%3d ", arr[i][j]);
		}
		printf("\n");
	}


	return 0;
}