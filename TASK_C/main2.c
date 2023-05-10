#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int Big(char* word);
char most(char* word);

int main()
{
	char word[10000];

	scanf("%s", word);
	Big(word);


	return 0;
}

char most(char* word)
{	
	char str1[1000] = {0};
	char str2[1000] = {0};
	int i = 0;
	int change = 65;

	while(change >= 65)
	{

	}
}


int Big(char* word)
{
	while (1)
	{
		if (*word == '\0')
		{
			return 0;
		}
		if (*word >= 'a' && *word <= 'z')
		{
			*word -= 32;
		}
		word++;
	}
}