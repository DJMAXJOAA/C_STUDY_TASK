#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void MaxAndMin(int* arr, int** maxPtr, int** minPtr);

int main()
{
	int arr[5];
	int* maxPtr = arr;
	int* minPtr = arr;

	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
	}
	MaxAndMin(arr, &maxPtr, &minPtr);

	printf("%p %p %p\n", arr, maxPtr, minPtr);
	printf("%d %d\n", *maxPtr, *minPtr);
}

void MaxAndMin(int* arr, int** maxPtr, int** minPtr)
{
	**maxPtr = *arr;
	**minPtr = *arr;
	for (int i = 1; i < 5; i++)
	{
		if (arr[i] > **maxPtr)
		{
			*maxPtr = &arr[i];
		}
		else if (arr[i] <= **minPtr)
		{
			*minPtr = &arr[i];
		}
	}
}