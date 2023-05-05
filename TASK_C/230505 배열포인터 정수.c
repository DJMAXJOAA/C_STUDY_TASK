#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int Arr[50] = { 1,2,3,4,5,6 };
	const int length = 6;

	int* p_Arr1 = Arr;
	int* p_Arr2 = Arr + (length-1);

	printf("input :");
	for (int i = 0; i < length; i++)
	{
		printf("%d ", Arr[i]);
	}
	printf("\n");

	for (int i = 0; i < length/2; i++)
	{
		int temp = *(p_Arr1 + i);
		*(p_Arr1 + i) = *(p_Arr2 - i);
		*(p_Arr2 - i) = temp;
	}

	printf("output :");
	printf("input :");
	for (int i = 0; i < length; i++)
	{
		printf("%d ", Arr[i]);
	}
	printf("\n");
	return 0;
}