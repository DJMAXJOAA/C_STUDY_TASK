/*
Q4. Factorial ���, � ���� ���� n�� �Է¹޾Ƽ�
n!�� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
*/

/*
1. �ݺ����� �뵵�� �°� ����� ����غ���
���� �� while�� ������ �� ������ �ִ� ���� / for�� ��� �ݺ��� ������ ���� ���� ������
2. �ݺ� �� ������ ���ϱ�, �÷��� �����ұ�? ���⼺
*/

#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int main()
{
	int factorial;
	int result = 1;

	printf("n ���� �Է��� �ּ��� : ");
	scanf_s("%d", &factorial);
	

	while (factorial > 0)
	{
		result *= factorial;
		factorial--;
	}
	printf("%d\n", result);

	return 0;
}