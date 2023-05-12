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
	printf("���л��� : ");
	scanf("%d", &a);
	Q* std = (Q*)malloc(sizeof(Q) * a);

	while (1)
	{
		int sel;

		line();
		printf("1. �Է� : �л� ������ ����մϴ�.\n");
		// �����Ҵ�, ����ü�迭495, �����Ҵ� ����
		printf("2. ��� : ��ü �л� ���\n");
		// ����ü�迭 print 
		printf("3. �˻� : �̸����� �˻�\n");
		// �˻����Է� -> �ڱ����� ����ü499 -> i�� �̸� ���� ���� ���
		printf("4. ����\n");
		printf("�Է°�>>");
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
		printf("�л��� �ִ�\n");
		student_count--;
		return 0;
	}
	printf("%d��° �л��� �й�,�̸�,���������� : ", student_count);
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
			printf("�й��� �ߺ��˴ϴ�. �ٽ� �Է����ּ���.\n");
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
		printf("�й� : %d / �̸� : %s / ���� : %d , ���� : %d , ���� : %d / ���� : %d / ��� : %.1f\n", pstd[i].student_number, pstd[i].name, pstd[i].grade[0], pstd[i].grade[1], pstd[i].grade[2], pstd[i].grade[3], pstd[i].avr);
	}
}

void search_student(Q* std)
{
	char search[100];
	printf("�˻��� �Է� : ");
	scanf("%s", search);
	for (int i = 0; i < student_count; i++)
	{
		if (strcmp(std[i].name, search) == 0)
		{
			printf("�й� : %d / �̸� : %s / ���� : %d , ���� : %d , ���� : %d / ���� : %d / ��� : %.1f\n", std[i].student_number, std[i].name, std[i].grade[0], std[i].grade[1], std[i].grade[2], std[i].grade[3], std[i].avr);
			break;
		}
	}
}

void line()
{
	printf("-------------------------------------------------------\n");
}