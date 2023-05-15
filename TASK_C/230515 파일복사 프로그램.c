#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

int main()
{
	char abc[100] = { "abc.png" };
	char qwe[100] = { "dest.png" };
	char str[100000] = { 0 };

	FILE* source = fopen(abc, "rb");
	if (source == NULL)
	{
		printf("반환1");
		return 1;
	}

	FILE* dest = fopen(qwe, "wb");
	if (dest == NULL)
	{
		printf("반환2");
		return 1;
	}

	fseek(source, 0, SEEK_END);
	int size = ftell(source);

	fread(str, 1, size, source);
	fwrite(str, 1, size, source);
	printf("%s", str);

	
	printf("%d", size);

	fclose(source);
	fclose(dest);
	return 0;
}