/* 백준 단어공부 https://www.acmicpc.net/problem/1157 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int Big(char* word);
char compare(char* word);

int main()
{
	// 100만개 단어까지 가능
	char word[1000001];

	scanf("%s", word);

	// 대문자로 다 변환 (대문자끼리 비교하기, 답이 대문자로 나와야함)
	Big(word);
	printf("%c", compare(word));

	return 0;
}

char compare(char* word)
{
	int alphabet[26] = { 0 };
	int alphabet_count[26] = { 0 }; // 다중배열을 안배운 상태, 두개의 배열로 나누어서 사용했음
	
	int max = 0;
	int count = 0;
	int x = 0; // max는 횟수가 가장 많은게 몇인지


	// 알파벳 지정
	for (int i = 0; i < 26; i++)
	{
		alphabet[i] = 65 + i;
	}

	while (*word != '\0')
	{
		for (int i = 0; i < 26; i++)
		{
			if (alphabet[i] == *word)
			{
				alphabet_count[i] += 1;
			}
			if (alphabet_count[i] > max)
			{
				max = alphabet_count[i];
			}
		}
		word++;
	}

	for (int i = 0; i < 26; i++)
	{
		if (max == alphabet_count[i])
		{
			count++;
			x = alphabet[i];
		}
		if (count >= 2)
		{
			return '?';
		}
	}
	return x;
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

