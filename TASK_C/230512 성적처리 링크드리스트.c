#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct student ST;

ST* head;
void func(void(*select)(ST* data));
void input(ST* data);
void input_student(void* a);

void output(ST* data);
void output_student(void* a);

void search(ST* data);
void search_student(void* a);

void line();

struct student
{
	int number;
	char name[10];
	int grade[3];
	struct student* next;
};


int main()
{
	while (1)
	{
		int n;
		scanf("%d", &n);
		ST* data = (ST*)malloc(sizeof(ST) * n);
		int sel = 0;

		line();
		printf("성적 처리 프로그램\n");
		printf("1. 입력\n");
		printf("2. 출력\n");
		printf("3. 검색\n");
		printf("4. 종료\n");
		scanf("%d", &sel);
		switch (sel)
		{
		case 1: line(); input(data);
		case 2: line(); output(data);
		case 3: line(); search(data);
		case 4: free(data); return 0;
		}
	}
	return 0;
}
void input(ST* data)
{
	ST* ptr;
	ST* newST = (ST*)malloc(sizeof(ST));
	newST->grade[0] = data->grade[0];
	newST->grade[1] = data->grade[1];
	newST->grade[2] = data->grade[2];
	newST->name = data->name;
	newST->number
	newST->next = NULL;

}
void input_student(void* a)
{
}

void output(ST* data)
{
}
void output_student(void* a)
{

}


void search(ST* data)
{
	
}
void search_student(void* a)
{
}

void line()
{
	printf("==============================================\n");
}

void func(void(*select)(ST* data))
{
	
}