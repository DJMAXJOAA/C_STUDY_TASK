/*
���̰� 5�� int�� �迭�� �����ϰ�, ����ڷκ��� 5���� ������ �Է¹޾� ������ ������ ����ϴ� ���α׷��� �ۼ��϶�.
1. �Էµ� ���� �� �ִ밪
2. �Էµ� ���� �� �ּҰ�
3. �Էµ� �������� ����
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	const range = 5;
	int arr[5] = { 0 };
	int total = 0;

	for (int i = 0; i < range; i++)
	{
		printf("%d��°�� �Է� : ", i);
		scanf("%d", &arr[i]);
		total += arr[i];
	}

	int max = arr[0];
	int min = arr[0];

	for (int i = 0; i < range; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
		else if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	printf("�ִ밪 : %d\t�ּҰ� : %d\t���� : %d\n", max, min, total);

	return 0;
}