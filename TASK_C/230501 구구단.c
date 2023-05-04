/*
다음과 같이 형태가 되도록 구구단을 출력하라
원하는 ~단을 입력받아 n단까지 출력한다.
ex) n = 6 (2단부터 ~ 18단까지 )
구구단 자리수 딱 맞춰서 (%.2d)
2*1=2 3*1=3
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int gugudan;
	const int standard = 3;		// 한칸에 최대 몇줄의 구구단까지? (현재 3줄)
	scanf("%d", &gugudan);

	if (gugudan > 18 || gugudan < 2)
	{
		printf("2단 이하 18단 이상 불가\n");
		return 0;
	}

	printf("\t\t구구단\n");
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