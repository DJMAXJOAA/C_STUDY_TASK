/*
사용자로부터 계속 정수를 입력받아 그 값을 더해나가는 프로그램을 작성하라.
단, 사용자가 0을 입력할 때까지 계속 되어야 하며 0이 입력되면 입력된 모든 정수의 합을 출력한다.
*/

/*
다른 반복문도 사용해보기
조건이 달려 있으니까 for보다는 while이 더 적합할 것
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a;
	int sum = 0;
	do
	{
		printf("0을 입력하면 정수의 합이 나옵니다\n");
		printf("정수의 값을 입력해 주세요 : ");
		
		scanf_s("%d", &a);
		sum += a;
	} while (a != 0);
	printf("모든 정수의 합 %d", sum);

	return 0;
}