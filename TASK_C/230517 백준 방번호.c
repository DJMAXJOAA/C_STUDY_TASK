#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char n[10] = { 0 };
	scanf("%s", &n);
	int n_count[10] = { 0 };
	
	int max = 0;

	for (int i = 0; i < strlen(n); i++)
	{
		int temp = n[i] - '0';
		n_count[temp]++;
	}

	n_count[6] = (n_count[6] += n_count[9] + 1) / 2;

	for (int i = 0; i < 8; i++)
	{
		if (n_count[i] > max)
		{
			max = n_count[i];
		}
	}

	printf("%d", max);
	return 0;
}