#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char arr1[1000] = { 0 };
	int count = 0;
	int n = 0;
	
	scanf("%d", &n);	// n È½¼ö
	gets(arr1);

	for (int i = 0; i < n; i++)
	{
		gets(arr1);
		const length = strlen(arr1);		

		for (int i = 2; *arr1 != '\0'; i++)
		{
			for (int j = 0; j < i; j++)
			{
				if (arr1[i] == arr1[j])
				{
					break;
				}
			}
		}
	}
	printf("%d", count);
	
	return 0;
}