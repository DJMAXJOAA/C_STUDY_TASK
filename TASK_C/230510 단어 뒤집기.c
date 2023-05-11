#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void change_str(char* pstr1, char* pstr2, int count);

int main()
{
	int t;
	scanf("%d", &t);
	getchar();
	for (int i = 0; i < t; i++)
	{
		char str[1001];
		char* pstr1 = str;
		char* pstr2 = str;
		int count = 0;
		gets(str);

		while (1)
		{
			if (*pstr2 == '\0')
			{
				pstr2--;
				change_str(pstr1, pstr2, count / 2);
				break;
			}
			if (*pstr2 == ' ')
			{
				pstr2--;
				change_str(pstr1, pstr2, count / 2);
				pstr2 += 2;
				pstr1 = pstr2;
				count = 0;
			}
			pstr2++;
			count++;
		}
		printf("%s\n", str);
	}
	return 0;
}

void change_str(char* pstr1, char* pstr2, int count)
{
	for (int i = 0; i < count; i++)
	{
		char temp = *(pstr1 + i);
		*(pstr1 + i) = *(pstr2 - i);
		*(pstr2 - i) = temp;
	}
}