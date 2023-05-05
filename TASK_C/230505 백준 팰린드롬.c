#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int palindrome(char* word, int range);

int main()
{
	char word[1000] = { 0 };
	char* p_word = word;
	gets(word);
	const int range = strlen(word);

	int x = palindrome(word, range);
	printf("%d", x);

	return 0;
}

int palindrome(char word[], int range)
{
	if (range < 1 || range > 100) return 0;
	for (int i = 0; i < range / 2; i++)
	{
		if (word[i] != word[range - i - 1])
		{
			return 0;
		}
	}
	return 1;
}