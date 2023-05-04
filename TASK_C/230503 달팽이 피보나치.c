#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* 피보나치 수열 이용 */
//int snail(int month);
//
//int main()
//{
//	const month = 12;
//	printf("%d달 간 총 달팽이 : %d\n", month, snail(month));
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
	// x:새끼달팽이, y:어른달팽이(새끼못낳음), z:어른달팽이(새끼o)!

	printf("%d개월 총 달팽이갯수 %d", month, snail(x, y, z, month));
}

int snail(int x, int y, int z, int month)
{
	if (month == 0)
	{
		return x + y + z; // month(12)개월째가 되면, 총합 반환
	}

	/* 카운트 */
	if (y >= 1) // 어른달팽이(새끼못낳음) 1마리보다 많으면
	{
		z += y;
		y = 0;	// 어른달팽이(새끼못낳음) -> 어른달팽이(바로 새끼+1)
	}
	if (x >= 1)
	{
		y += x;
		x = 0;
	}
	if (z >= 1) // 어른달팽이가 1마리보다 많으면
	{
		x += z; // 새끼달팽이 1마리 추가
	}

	
	return snail(x, y, z, month - 1); // 1달 감소 후 재실행
}