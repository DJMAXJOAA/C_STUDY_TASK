#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int n = 0;
	int arr1[200][2] = { 0 };

	scanf("%d", &n);
	getchar();

	for (int i = 0; i < n; i++)
	{
		scanf("%d %d", &arr1[i][0], &arr1[i][1]);
	}

	// 몸무게, 키 비교
	for (int i = 0; i < n; i++)
	{
		int count = 0;
		for (int j = 0; j < n; j++)
		{
			if (arr1[i][0] < arr1[j][0] && arr1[i][1] < arr1[j][1])
			{
				count++;
			}
		}
		printf("%d ", count + 1);
	}
	return 0;
}
