#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int random(int* baseball);
int judgement(int *jud, int *baseball, int *count);

int main()
{
	int baseball[3] = { 8, 4, 5 };
	int judge[3] = { 0 };
	int count[3] = { 0 };
	int* pcount = count;
	random(baseball);
	printf("%d %d %d\n\n", baseball[0], baseball[1], baseball[2]);

	while (count[0] != 3)
	{
		printf("판정값 입력 : ");
		for (int i = 0; i < 3; i++)
		{
			scanf("%d", &judge[i]);
		}
		judgement(judge, baseball, pcount);
		printf("strike : %d / ball : %d / out = %d\n", pcount[0], pcount[1], pcount[2]);
	}
	printf("Homerun!\n");

	return 0;
}

int judgement(int* jud, int* baseball, int *count)
{
	for (int i = 0; i < 3; i++)
	{
		count[i] = 0;
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (j == 3)
			{
				*(count + 2) += 1;
				break;
			}
			if (jud[i] == baseball[i])
			{
				*count += 1;
				break;
			}
			else if (jud[i] == baseball[j])
			{
				*(count + 1) += 1;
				break;
			}
		}
	}
	return 0;
}

int random(int *baseball)
{
	srand(time(NULL));
	*baseball = (rand() % 9)+1;

	do
	{
		*(baseball+1) = (rand() % 9) + 1;
	} while (*(baseball+1) == *baseball);

	do
	{
		*(baseball + 2) = (rand() % 9) + 1;
	} while (*(baseball+2) == *baseball || *(baseball + 2) == *(baseball + 1));
	return 0;
}