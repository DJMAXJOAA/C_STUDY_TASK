/*
Q3 학생이 전체 평균 점수에 대한 학점을 출력하는 프로그램을 작성
성적이 90점 이상 A, 성적이 80점 이상 B
성적이 70점 이상 C, 성적이 60점 이상 D
그 미만은 F로 처리한다

프로그램 실행시 국어 영어 수학의 점수를 입력받는다.
그 평균을 구하고, 위 평가기준을 참고하여 적절한 학점을 출력하라.
*/

/*
1. 성적을 입력받고, 추가로 학점을 저장하는 문자 변수를 써볼수도 있음
2. 평균 점수를 실수로 입력받아서 소수점 자리까지 표시할 수도 있음
3. 효율적으로 코딩하는 측면에서 첫번째 조건 90점 이상에서 한번 걸러냈으니까 굳이 90점 아래를
조건을 걸어서 추가로 검증을 할 필요는 없다 (AND 연산까지는 불필요한 조건이다)
*/

#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int main()
{
	int kor, eng, mat, avr = 0;
	printf("국어 영어 수학 순으로 성적을 입력해 주세요. : ");
	scanf_s("%d %d %d", &kor, &eng, &mat);
	avr = (kor + eng + mat) / 3;
	
	if (avr >= 90)
	{
		printf("학점 A\n");
	}
	else if (avr < 90 && avr >= 80)
	{
		printf("학점 B\n");
	}
	else if (avr < 80 && avr >= 70)
	{
		printf("학점 C\n");
	}
	else if (avr < 70 && avr >= 60)
	{
		printf("학점 D\n");
	}
	else
	{
		printf("학점 F\n");
	}

	return 0;
}