#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void change(char* a, char* b, char* c);
void swap(char* x, char* y);
void temp_change(char* str);

void main()
{
	char a[100];
	char b[100];
	char c[100];
	scanf("%s%s%s", a, b, c);
	change(a, b, c);
	printf("%s %s %s\n", a, b, c);
}

void change(char* a, char* b, char* c)
{
	char temp_a[100];
	char temp_b[100];
	char temp_c[100];
	strcpy(temp_a, a);
	strcpy(temp_b, b);
	strcpy(temp_c, c);

	temp_change(temp_a);
	temp_change(temp_b);
	temp_change(temp_c);

	if (strcmp(temp_a,temp_b) == 1)
	{
		swap(temp_a, temp_b);
		swap(a, b);
	}
	if (strcmp(temp_a,temp_c) == 1)
	{
		swap(temp_a, temp_c);
		swap(a, c);
	}
	if (strcmp(temp_b,temp_c) == 1)
	{
		swap(temp_b, temp_c);
		swap(b, c);
	}
}

void swap(char* x, char* y)
{
	while (*x != *y)
	{
		int temp = *x;
		*x = *y;
		*y = temp;

		x++;
		y++;
	}
}

void temp_change(char* str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && 'Z' >= str[i])
		{
			str[i] += 32;
		}
		i++;
	}
}

