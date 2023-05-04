#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* �Ǻ���ġ ���� �̿� */
//int snail(int month);
//
//int main()
//{
//	const month = 12;
//	printf("%d�� �� �� ������ : %d\n", month, snail(month));
//
//	return 0;
//}
//
//int snail(int month)
//{
//	if (month == 1) 
//	{
//		return 1;
//	}
//	if (month == 2) 
//	{
//		return 2;
//	}
//	return snail(month - 2) + snail(month - 1);
//}

int snail(int x, int y, int z, int month);

int main()
{
	int month = 12;
	int x = 1, y = 0, z = 0;
	// x:����������, y:�������(����������), z:�������(����o)!

	printf("%d���� �� �����̰��� %d", month, snail(x, y, z, month));
}

int snail(int x, int y, int z, int month)
{
	if (month == 0)
	{
		return x + y + z; // month(12)����°�� �Ǹ�, ���� ��ȯ
	}

	/* ī��Ʈ */
	if (y >= 1) // �������(����������) 1�������� ������
	{
		z += y;
		y = 0;	// �������(����������) -> �������(�ٷ� ����+1)
	}
	if (x >= 1)
	{
		y += x;
		x = 0;
	}
	if (z >= 1) // ������̰� 1�������� ������
	{
		x += z; // ���������� 1���� �߰�
	}

	
	return snail(x, y, z, month - 1); // 1�� ���� �� �����
}