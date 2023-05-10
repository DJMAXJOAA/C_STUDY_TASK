#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int c;
	scanf("%d", &c);

	for (int i = 0; i < c; i++)
	{
		int n = 0;
		double count = 0;
		double score[1000] = { 0 };
		double avg = 0;
		scanf("%d", &n);
		for (int j = 0; j < n; j++)
		{
			scanf("%lf", &score[j]);
			avg += score[j];
		}
		avg /= n;
		for (int j = 0; j < n; j++)
		{
			if (score[j] > avg)
			{
				count++;
			}
		}
		printf("%.3lf%%\n", (double)100 / n * count);
	}
	return 0;
}