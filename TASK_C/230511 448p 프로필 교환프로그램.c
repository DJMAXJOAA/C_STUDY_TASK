#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(char* string, void* a, void* b);

int main()
{
	int a[3] = { 22, 44 };				// ����
	double b[3] = { 187.5 , 165.4 };	// Ű
	char string[100] = { 0 };
	void* pa;
	void* pb;
	pa = &a;
	pb = &b;

	printf("���� ��ȯ : int �Է� / Ű ��ȯ : double �Է� : ");
	scanf("%s", string);

	printf("\n");

	printf("ù��° ����� ���̿� Ű : %d, %.1lf\n", a[0], b[0]);
	printf("�ι�° ����� ���̿� Ű : %d, %.1lf\n\n", a[1], b[1]);
	swap(string, pa, pb);
	printf("ù��° ����� ���̿� Ű : %d, %.1lf\n", a[0], b[0]);
	printf("�ι�° ����� ���̿� Ű : %d, %.1lf\n", a[1], b[1]);

	return 0;
}

void swap(char* string, void* a, void* b)
{
	if (strcmp(string, "int") == 0)
	{
		int temp = *(int*)a;
		*(int*)a = *((int*)a+1);
		*((int*)a+1) = temp;
	}
	if (strcmp(string, "double") == 0)
	{
		double temp = *(double*)b;
		*(double*)b = *((double*)b+1);
		*((double*)b+1) = temp;
	}
}