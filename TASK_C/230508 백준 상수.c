#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(int x, int y);
int reverse(int y);

int main()
{
	int x, y;
	scanf("%d %d", &x, &y);
	printf("%d", compare(reverse(x), reverse(y)));

	return 0;
}

int reverse(int value)
{
	int v100 = value / 100;
	int v10 = value / 10 % 10 * 10;
	int v1 = value % 100 % 10 * 100;
	return v100 + v10 + v1;
}

int compare(int x, int y)
{
	if (x > y) return x;
	else return y;
}