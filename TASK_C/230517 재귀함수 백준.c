#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* ����Լ��� ����� ��� */
int printstr(int num)
{
	if (num <= 0) return 0;
	printf("____");
	return printstr(num - 1);
}

/* ����Լ�, 0���� s���� ���� */
int recursive(int num, int s)
{
	printstr(num);
	printf("\"����Լ��� ������?\"\n");
	if (num >= s)	// ����Լ� ���ߴ� Ʈ����
	{
		printstr(num);
		printf("\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"\n");
		printstr(num);
		printf("��� �亯�Ͽ���.\n");
		return 1;	// �ٽ� ���ư���
	}
	printstr(num);
	printf("\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���.\n");
	printstr(num);
	printf("���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���.\n");
	printstr(num);
	printf("���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"\n");
	return recursive(num + 1, s) + printstr(num) + printf("��� �亯�Ͽ���.\n");
}

int main()
{
	
	int num = 0;
	int s;
	scanf("%d", &s);
	printf("��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������.\n");
	recursive(num, s);
	return 0;
}