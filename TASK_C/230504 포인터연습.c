/*
1.  int형 num1, num2를 선언과 동시에 10과 20으로 초기화
int형 포인터 ptr1, ptr2를 선언한다.
2. 각 num1과 num2를 이용해서
num1은 10 증가, num2는 10 감소하게 하고, 이후 ptr1과 ptr2가
가리키는 대상을 서로 바꾼다.
3. 마지막으로 ptr1과 ptr2가 가리키는 변수의 내용을 출력한다.
각 변수 num1, num2도 출력해서 저장된 값이 같은지 확인한다.
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