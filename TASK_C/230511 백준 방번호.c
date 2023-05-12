#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* 정수형 하던거 */
//int main()
//{
//	int arr[1000] = { 0 };
//	int* parr = arr;
//	int n;
//	int compare[2][10] = { {0}, { 0,1,2,3,4,5,6,7,8,9 } };
//	int count = 0;
//	int count2 = 0;
//
//	scanf("%d", &n);
//	while (n != 0) {
//		arr[n % 10]++;
//		n /= 10;
//	}
//
//	while (*parr != 0)
//	{
//		count++;
//		parr++;
//	}
//
//	for (int i = 0; i < count; i++)
//	{
//		for (int j = 0; j < 10; j++)
//		{
//			if (arr[i] == compare[1][j])
//			{
//				compare[0][j]++;
//			}
//		}
//	}
//	count = 0;
//
//	for (int i = 0; i < 10; i++)
//	{
//		if (compare[0][6] > 2)
//		{
//			compare[0][6]--;
//			compare[0][9]++;
//		}
//		else if (compare[0][9] > 2)
//		{
//			compare[0][9]--;
//			compare[0][6]++;
//		}
//	}
//
//	while (1)
//	{
//		for (int i = 0; i < 10; i++)
//		{
//			if (compare[0][i] > 0) compare[0][i] -= 1;
//			else count++;
//		}
//		if (count == 10) break;
//		else count2++; count = 0;
//	}
//	printf("%d", count2);
//
//	return 0;
//}

/* 문자열로 */
int main()
{
	char number[1000000] = { '9','9','9','9' };
	char compare[2][10] = {'0','1','2','3','4','5','6','7','8','9'};
	char* pnum = number;
	int count = strlen(number);

	/* 1. 방번호 입력*/
	//while (1)
	//{
	//	if (*pnum == '\0')
	//	{
	//		scanf("%c", &number[count]);
	//		break;
	//	}
	//	scanf("%c", &number[count]);
	//	count++;
	//	pnum++;
	//}

	for (int i = 0; i < count; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (compare[0][j] == number[i])
			{
				compare[1][j]++;
				break;
			}
		}
	}

	for (int i = 0; i < 10; i++)
	{
		printf("%d ", compare[1][i]);
	}
}