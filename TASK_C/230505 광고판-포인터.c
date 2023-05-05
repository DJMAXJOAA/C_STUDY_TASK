#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

int main()
{
	char ad[50];
	char* p_ad = ad;
	gets(ad);
	int range = strlen(ad);

	while (1)
	{
		int temp = *p_ad;
		for (int i = 1; i < range; i++)
		{
			*p_ad = *(p_ad + 1);
			p_ad++;
			if (i == range - 1)
			{
				*p_ad = temp;
			}
		}
		puts(ad);
		p_ad = ad;
		Sleep(100);
		system("cls");
	}
}