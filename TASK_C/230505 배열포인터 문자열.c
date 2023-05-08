#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char Arr[50];

	getchar();

	const int length = strlen(Arr);

	char* p_Arr1 = Arr;
	char* p_Arr2 = Arr + length - 1;

	printf("input :");
	puts(Arr);
	printf("\n");

	
	for (int i = 0; i < length/2; i++)
	{
		char temp = *(p_Arr1 + i);
		*(p_Arr1 + i) = *(p_Arr2 - i);
		*(p_Arr2 - i) = temp;
	}

	printf("output :");
	puts(Arr);
	printf("\n");
	return 0;
}