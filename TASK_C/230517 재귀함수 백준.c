#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char recursive(int n);

int count = 0;
int x = 0;
int main()
{
	int n = 2;
	printf("��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������.\n");
	recursive(n);
	printf("��� �亯�Ͽ���.");
	return 0;
}

char recursive(int n)
{
	if (count == n && x == 0)
	{
		for (int i = 0; i < count; i++) printf("____");
		printf("��� �亯�Ͽ���.\n");
		count--;
		if (count == 0)
		{
			return 0;
		}
		return recursive(n - 1);
	}
	for (int i = 0; i < count; i++) printf("____");
	printf("\"����Լ��� ������?\"\n");
	if (count == n)
	{
		for (int i = 0; i < count; i++) printf("____");
		printf("\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"\n");
		count--;
		x++;
		return recursive(n - 1);
	}
	else
	{
		for (int i = 0; i < count; i++) printf("____");
		printf("\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���.\n");

		for (int i = 0; i < count; i++) printf("____");
		printf("���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���.\n");

		for (int i = 0; i < count; i++) printf("____");
		printf("���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"\n");
	}
	count++;
	return recursive(n);
}