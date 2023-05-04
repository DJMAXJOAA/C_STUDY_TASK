/*
������ ���� ���°� �ǵ��� �������� ����϶�
���ϴ� ~���� �Է¹޾� n�ܱ��� ����Ѵ�.
ex) n = 6 (2�ܺ��� ~ 18�ܱ��� )
������ �ڸ��� �� ���缭 (%.2d)
2*1=2 3*1=3
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int gugudan;
	const int standard = 3;		// ��ĭ�� �ִ� ������ �����ܱ���? (���� 3��)
	scanf("%d", &gugudan);

	if (gugudan > 18 || gugudan < 2)
	{
		printf("2�� ���� 18�� �̻� �Ұ�\n");
		return 0;
	}

	printf("\t\t������\n");
	for (int i = 2; i <= gugudan; i+=standard)
	{
		printf("------------------------------------------------------\n");
		for (int j = 1; j <= 9; j++)
		{
				for (int k = 0; k < standard; k++)
				{
					if (k + i <= gugudan)
					{
						printf("%2d * %d = %3d\t", (i + k), j, (i + k) * j);
					}
				}
				printf("\n");
			}
			printf("\n");
		}
	return 0;
}