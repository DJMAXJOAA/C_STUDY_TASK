#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int search(char* cstr1, char* cstr2);	// �ܾ� �˻�

int main()
{
	char str1[1000] = "I am a boy. I'm happy!";
	char str2[100] = "girl";				// ��ü�� �ܾ�
	char str3[100] = "asdfasdf";				// ���忡�� �ٲ� �ܾ�
	const int str3_length = strlen(str3);

	char temp[1000] = { 0 };
	char* pstr1 = str1;

	printf("%s�� %s�� %s�� �ٲߴϴ�\n\n", str1, str3, str2);

	if (search(pstr1, str3) == 0)	// ��ġ�ϴ� �ܾ� X
	{
		printf("�ٲ� �ܾ �����ϴ�\n");
		return 0;
	}

	pstr1 += search(pstr1, str3);	// boy�� ��ġ�ϴ� �ܾ ���°�迭����
	printf("%s ��ġ �ּ� : %p\n", str3, pstr1);

	strcpy(temp, pstr1 + str3_length);	//boy ���� I'm happy! temp�� ����
	strcpy(pstr1, str2);			// boy�κп� girl �ٿ��ֱ�
	strcat(pstr1, temp);			// girl ���Ŀ� temp �ٿ��ֱ�

	printf("%s\n", str1);
	return 0;
}

int search(char* cstr1, char* cstr2)
{
	int x = 0;	// x = ���° �迭���� �˻� ��� ã�Ҵ���
	while (*cstr1)
	{
		if (*cstr1 == *cstr2)
		{
			int i = 0;
			while (1)
			{
				if (*cstr2 == '\0')
				{
					return x;
				}
				if (*cstr1 != *cstr2)
				{
					break;
				}
				i++;
				cstr1 += i;
				cstr2 += i;
			}
		}
		x++;
		cstr1++;
	}
	return 0;
}