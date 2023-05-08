#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* change(char* str);

int main()
{
	char strr[100];
	scanf("%s", strr);
	printf("입력한 단어 : %s\n", strr);
	change(strr);
	printf("생략한 단어 : %s\n", strr);
}

char* change(char* str)
{
	char* pstr = str;

	if (strlen(str)<=5)
	{
		return pstr;
	}
	else
	{
		str += 5;
		while (*str != '\0')
		{
			*str = '*';
			str++;
		}
	}
	return pstr;
}