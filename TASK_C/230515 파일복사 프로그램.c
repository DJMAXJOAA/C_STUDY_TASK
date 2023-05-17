#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

int main()
{
	char x[100] = { "abc.png" };
	char y[100] = { "dest.png" };

	int select_size = 1;
	printf("전송 바이트 설정 (최대 16bytes) : ");
	scanf("%d", &select_size);

	char copy[16] = { 0 };

	FILE* source = fopen(x, "rb");
	if (source == NULL)
	{
		printf("반환1");
		return 1;
	}

	FILE* dest = fopen(y, "wb");
	if (dest == NULL)
	{
		printf("반환2");
		return 1;
	}

	fseek(source, 0, SEEK_END);
	double size = ftell(source);
	rewind(source);

	while (1)
	{
		fread(copy, select_size, 1, source);
		if (feof(source) == 1)
		{
			break;
		}
		else
		{
			fwrite(copy, select_size, 1, dest);
		}
		printf("%7.2lf%% 진행 중\n", (double)ftell(source)/size*100);

	}
	
	printf("%dbytes로 전송해서 복사 완료\n", select_size);

	fclose(source);
	fclose(dest);
	return 0;
}