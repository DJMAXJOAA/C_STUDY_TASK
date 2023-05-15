#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	FILE* ifp1, *ifp2, *ofp;
	char str1[20];		//1번입력
	char str2[20];		//2번입력
	char str[20];
	int count = 0;

	ifp1 = fopen("a.txt", "r");
	if (ifp1 == NULL)
	{
		printf("반환1\n");
		return 1;
	}

	ifp2 = fopen("b.txt", "r");
	if (ifp2 == NULL)
	{
		printf("반환2\n");
		return 1;
	}

	ofp = fopen("c.txt", "w");
	if (ofp == NULL)
	{
		printf("반환3\n");
		return 1;
	}

	while (1)
	{
		fgets(str2, sizeof(str2), ifp2);
		if (feof(ifp2))
		{
			break;
		}
		fseek(ifp1, 0, SEEK_SET);
		while (1)
		{
			fgets(str1, sizeof(str1), ifp1);
			if (feof(ifp1))
			{
				break;
			}
			if (strcmp(str1, str2) == 0)
			{
				count++;
			}
		}
		if (count == 0)
		{
			fprintf(ofp, "%s", str2);
		}
		count = 0;
	}


	fclose(ifp1);
	fclose(ifp2);
	fclose(ofp);
	return 0;
}