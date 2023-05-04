/*
길이가 5인 int형 배열을 선언하고, 사용자로부터 5개의 정수를 입력받아 다음의 내용을 출력하는 프로그램을 작성하라.
1. 입력된 정수 중 최대값
2. 입력된 정수 중 최소값
3. 입력된 정수들의 총합
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
		printf("%d번째값 입력 : ", i);
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
	printf("최대값 : %d\t최소값 : %d\t총합 : %d\n", max, min, total);

	return 0;
}