#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int m;
	int count = 1;
	int arr[100][100] = {0,};
	printf("M�� �Է� : ");
	scanf("%d", &m);

	int i = 0, j = 0;
	// i = ��, j = ��
	while (count <= m * m)
	{
		// 1. ���� ����->������
		while (arr[i][j] == 0 && j < m)
		{
			arr[i][j] = count;
			count++;
			j++;
		}
		j--;
		i++;

		// 2. �Ʒ�
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