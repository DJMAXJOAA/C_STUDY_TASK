#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char ch = 0;
	int max = 0, compare = 0;
	while (1)
	{
		while(1)
		{
			int res = scanf("%c", &ch);
			if (res == -1)
			{
				printf("가장 큰 값 : %d", max);
				return 0;
			}
			if (ch == '\n')
			
				break;
			}
			compare++;
		} 
		if (compare >= max)
		{
			max = compare;
		}
		compare = 0;
	}
	return 0;
}