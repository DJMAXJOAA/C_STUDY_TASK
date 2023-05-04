/*
1.  int�� num1, num2�� ����� ���ÿ� 10�� 20���� �ʱ�ȭ
int�� ������ ptr1, ptr2�� �����Ѵ�.
2. �� num1�� num2�� �̿��ؼ�
num1�� 10 ����, num2�� 10 �����ϰ� �ϰ�, ���� ptr1�� ptr2��
����Ű�� ����� ���� �ٲ۴�.
3. ���������� ptr1�� ptr2�� ����Ű�� ������ ������ ����Ѵ�.
�� ���� num1, num2�� ����ؼ� ����� ���� ������ Ȯ���Ѵ�.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num1 = 10, num2 = 20;
	int* ptr1 = &num1;
	int* ptr2 = &num2;

	printf("ptr1 : %d\tptr2 : %d\n", *ptr1, *ptr2);
	printf("num1 : %d\tnum2 : %d\n\n", num1, num2);

	*ptr1 += 10;
	*ptr2 -= 10;

	ptr1 = &num2;
	ptr2 = &num1;

	printf("ptr1 : %d\tptr2 : %d\n", *ptr1, *ptr2);
	printf("num1 : %d\tnum2 : %d\n", num1, num2);

	return 0;
}