/*
Q1 �ΰ� ������ 100���̶�� �����ϰ� ��� �� ���� �ǿ�� ������ 3�ð� 40�� ����ȴٰ� �Ѵ�.
� ����� ����(20�� ����)�� �� ���� N�Ⱓ �Ϸ翡 M���� ��踦 �ǿ��ٸ�
������ �󸶳� ����Ǿ��� �� �� ���� �� �� �ִ°�?
(ex) N = 20, M = 3�϶�
�پ�� ���� : ���� ���ð� ����
��� ���� : ���� ���� ���ð� ����
*/

/*
��Ⱓ �����	�ִ� 80��
��� ���
�ð�, ��		60�� �Ѿ�� 1�ð�, 24�ð� �Ѿ�� �Ϸ�
�پ�� ����
�ΰ��� ����		100��
*/

#include <stdio.h>

int main()
{
	int smoke, cigar, year = 0, day = 0, hour = 0, min = 0;
	long total_min = 0, total_age = 0;


	printf("����� �Ⱓ : ");
	scanf_s("%d", &smoke);
	printf("\n");

	printf("��񳪿�? : ");
	scanf_s("%d", &cigar);
	printf("\n");
	// ����� �Ⱓ�� ����� ���� �Է�

	hour = 365 * smoke * cigar * 3;
	min = 365 * smoke * cigar * 40;

	total_min = (hour * 60) + min;
	total_age = (100 * 365 * 24 * 60) - total_min;
	// total_min�� �پ�� ������ ������ ȯ��
	// total_age�� �� ���� - �پ�� ������ ������ ȯ��

	hour += min / 60;
	min = min % 60;

	day = hour / 24;
	hour = hour % 24;

	year = day / 365;
	day = day % 365;

	printf("�پ�� ���� : %d�� %d�� %d�ð� %d��\n", year, day, hour, min);

	year = 0, day = 0, hour = 0, min = 0;
	// ����� ���� �ʱ�ȭ

	hour += total_age / 60;
	min = total_age % 60;

	day = hour / 24;
	hour = hour % 24;

	year = day / 365;
	day = day % 365;

	printf("��� ���� : %d�� %d�� %d�ð� %d��\n", year, day, hour, min);

	return 0;
}