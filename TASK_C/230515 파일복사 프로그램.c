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
	printf("���� ����Ʈ ���� (�ִ� 16bytes) : ");
	scanf("%d", &select_size);

	char copy[16] = { 0 };

	FILE* source = fopen(x, "rb");
	if (source == NULL)
	{
		printf("��ȯ1");
		return 1;
	}

	FILE* dest = fopen(y, "wb");
	if (dest == NULL)
	{
		printf("��ȯ2");
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
		printf("%7.2lf%% ���� ��\n", (double)ftell(source)/size*100);

	}
	
	printf("%dbytes�� �����ؼ� ���� �Ϸ�\n", select_size);

	fclose(source);
	fclose(dest);
	return 0;
}