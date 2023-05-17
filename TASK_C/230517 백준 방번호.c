#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//int main()
//{
//	char n[10] = { 0 };
//	scanf("%s", &n);
//	int n_count[10] = { 0 };
//	
//	int max = 0;
//
//	for (int i = 0; i < strlen(n); i++)
//	{
//		int temp = n[i] - '0';
//		n_count[temp]++;
//	}
//
//	n_count[6] = (n_count[6] += n_count[9] + 1) / 2;
//
//	for (int i = 0; i < 8; i++)
//	{
//		if (n_count[i] > max)
//		{
//			max = n_count[i];
//		}
//	}
//
//	printf("%d", max);
//	return 0;
//}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char n[1000] = { 0 };
	scanf("%s", n);
	int n_count[10] = { 0 };

	int max = 0;

	for (int i = 0; i < strlen(n); i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (n[i] - '0' == j)
			{
				n_count[j]++;
				break;
			}
		}
	}


	while (n_count[6] - n_count[9] != 1 && n_count[9] - n_count[6] != 1)
	{
		if (n_count[6] == n_count[9])
		{
			break;
		}
		if (n_count[6] > n_count[9] && n_count[6] >= 2)
		{
			n_count[6]--;
			n_count[9]++;
		}

		if (n_count[9] > n_count[6] && n_count[9] >= 2)
		{
			n_count[9]--;
			n_count[6]++;
		}
	}

	for (int i = 0; i < 10; i++)
	{
		if (n_count[i] > max) max = n_count[i]; 
	}

	printf("%d", max);
	return 0;
}