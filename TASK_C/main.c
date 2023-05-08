#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Big(char* word);

int main()
{
	char word[10000];
	char count_word[10000] = {0};
	char* p_word = word;
	int count = 0;

	scanf("%s", word);
	Big(word);

	int i = 0;
	while (word != '\0')
	{
		for (int j = 0; j < strlen(count_word); j++)
		{
			if (count_word[j] == *p_word)
			{

			}
		}
		p_word++;
	}
	return 0;
}

void Big(char* word)
{
	while (word != '\0')
	{
		if (*word >= 'a' && *word <= 'z')
		{
			*word -= 32;
		}
		word++;
	}
}