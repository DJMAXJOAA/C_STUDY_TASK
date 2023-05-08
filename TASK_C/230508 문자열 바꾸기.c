#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int search(char* cstr1, char* cstr2);	// 단어 검색

int main()
{
	char str1[1000] = "I am a boy. I'm happy!";
	char str2[100] = "girl";				// 대체할 단어
	char str3[100] = "asdfasdf";				// 문장에서 바꿀 단어
	const int str3_length = strlen(str3);

	char temp[1000] = { 0 };
	char* pstr1 = str1;

	printf("%s의 %s를 %s로 바꿉니다\n\n", str1, str3, str2);

	if (search(pstr1, str3) == 0)	// 일치하는 단어 X
	{
		printf("바꿀 단어가 없습니다\n");
		return 0;
	}

	pstr1 += search(pstr1, str3);	// boy와 일치하는 단어가 몇번째배열인지
	printf("%s 위치 주소 : %p\n", str3, pstr1);

	strcpy(temp, pstr1 + str3_length);	//boy 뒤의 I'm happy! temp에 복사
	strcpy(pstr1, str2);			// boy부분에 girl 붙여넣기
	strcat(pstr1, temp);			// girl 이후에 temp 붙여넣기

	printf("%s\n", str1);
	return 0;
}

int search(char* cstr1, char* cstr2)
{
	int x = 0;	// x = 몇번째 배열에서 검색 결과 찾았는지
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