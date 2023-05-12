#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct student Q;

void input_student(Q* std);
void output_student(Q* std);
void search_student(Q* std);
void line();

struct student
{
	int student_number;
	char name[20];
	int grade[4];
	float avr;
	Q* next;
};

int student_count = 0;
int a = 0;

int main()
{
	printf("총학생수 : ");
	scanf("%d", &a);
	Q* std = (Q*)malloc(sizeof(Q) * a);

	while (1)
	{
		int sel;

		line();
		printf("1. 입력 : 학생 정보를 등록합니다.\n");
		// 동적할당, 구조체배열495, 동적할당 수정
		printf("2. 출력 : 전체 학생 출력\n");
		// 구조체배열 print 
		printf("3. 검색 : 이름으로 검색\n");
		// 검색어입력 -> 자기참고 구조체499 -> i의 이름 학점 성적 출력
		printf("4. 종료\n");
		printf("입력값>>");
		scanf("%d", &sel);

		switch (sel)
		{
		case 1: line(); input_student(std); break;
		case 2: line(); output_student(std); break;
		case 3: line(); search_student(std); break;
		case 4: free(std); return 0;
		default: continue;
		}
	}
	getchar();
	return 0;
}

void input_student(Q* std)
{
	Q* pstd = std;
	student_count++;
	/*realloc(std, sizeof(Q) * student_count);*/
	if (student_count > a)
	{
		printf("학생수 최대\n");
		student_count--;
		return 0;
	}
	printf("%d번째 학생의 학번,이름,국영수성적 : ", student_count);
	scanf("%d", &(pstd + student_count - 1)->student_number);
	scanf("%s", &(pstd + student_count - 1)->name);
	scanf("%d", &(pstd + student_count - 1)->grade[0]);
	scanf("%d", &(pstd + student_count - 1)->grade[1]);
	scanf("%d", &(pstd + student_count - 1)->grade[2]);
	std[student_count - 1].grade[3] = std[student_count - 1].grade[0] + std[student_count - 1].grade[1] + std[student_count - 1].grade[2];
	std[student_count - 1].avr = (float)std[student_count - 1].grade[3] / 3;
	for (int i = 1; i < student_count; i++)
	{
		if (std[i - 1].student_number == std[student_count - 1].student_number)
		{
			printf("학번이 중복됩니다. 다시 입력해주세요.\n");
			student_count--;
			return 0;
		}
	}
}

void output_student(Q* std)
{
	Q* pstd = std;
	Q temp;
	int max = 0;
	for (int i = 0; i < student_count; i++)
	{
		for (int j = i; j < student_count; j++)
		{
			if (std[j].avr >= max)
			{
				temp = std[i];
				std[i] = std[j];
				std[j] = temp;
			}
		}
	}

	for (int i = 0; i < student_count; i++)
	{
		printf("학번 : %d / 이름 : %s / 국어 : %d , 영어 : %d , 수학 : %d / 총점 : %d / 평균 : %.1f\n", pstd[i].student_number, pstd[i].name, pstd[i].grade[0], pstd[i].grade[1], pstd[i].grade[2], pstd[i].grade[3], pstd[i].avr);
	}
}

void search_student(Q* std)
{
	char search[100];
	printf("검색어 입력 : ");
	scanf("%s", search);
	for (int i = 0; i < student_count; i++)
	{
		if (strcmp(std[i].name, search) == 0)
		{
			printf("학번 : %d / 이름 : %s / 국어 : %d , 영어 : %d , 수학 : %d / 총점 : %d / 평균 : %.1f\n", std[i].student_number, std[i].name, std[i].grade[0], std[i].grade[1], std[i].grade[2], std[i].grade[3], std[i].avr);
			break;
		}
	}
}

void line()
{
	printf("-------------------------------------------------------\n");
}