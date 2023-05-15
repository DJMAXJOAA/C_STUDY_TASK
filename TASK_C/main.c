#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	FILE* ifp1;

	ifp1 = fopen("a.txt", "r");
	if (ifp1 == NULL)
	{
		printf("¹ÝÈ¯1\n");
		return 1;
	}

	fgets(a, sizeof(str1), ifp1);
	if (a == NULL)
	{
		break;
	}
}