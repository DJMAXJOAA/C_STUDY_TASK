/* ���� �ܾ���� https://www.acmicpc.net/problem/1157 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int Big(char* word);
char compare(char* word);

int main()
{
	// 100���� �ܾ���� ����
	char word[1000001];

	scanf("%s", word);

	// �빮�ڷ� �� ��ȯ (�빮�ڳ��� ���ϱ�, ���� �빮�ڷ� ���;���)
	Big(word);
	printf("%c", compare(word));

	return 0;
}

char compare(char* word)
{
	int alphabet[26] = { 0 };
	int alphabet_count[26] = { 0 }; // ���߹迭�� �ȹ�� ����, �ΰ��� �迭�� ����� �������
	
	int max = 0;
	int count = 0;
	int x = 0; // max�� Ƚ���� ���� ������ ������


	// ���ĺ� ����
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

