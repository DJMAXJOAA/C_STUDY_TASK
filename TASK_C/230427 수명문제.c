/*
Q1 인간 수명이 100년이라고 가정하고 담배 한 개비를 피우면 수명이 3시간 40분 단축된다고 한다.
어떤 사람이 성인(20살 가정)이 된 이후 N년간 하루에 M개비씩 담배를 피웠다면
수명은 얼마나 단축되었고 몇 살 까지 살 수 있는가?
(ex) N = 20, M = 3일때
줄어든 수명 : ㅁ일 ㅁ시간 ㅁ분
기대 수명 : ㅁ살 ㅁ일 ㅁ시간 ㅁ분
*/

/*
몇년간 폈는지	최대 80년
담배 몇개비
시간, 분		60분 넘어가면 1시간, 24시간 넘어가면 하루
줄어든 수명
인간의 수명		100살
*/

#include <stdio.h>

int main()
{
	int smoke, cigar, year = 0, day = 0, hour = 0, min = 0;
	long total_min = 0, total_age = 0;


	printf("담배핀 기간 : ");
	scanf_s("%d", &smoke);
	printf("\n");

	printf("몇개폈나요? : ");
	scanf_s("%d", &cigar);
	printf("\n");
	// 담배핀 기간과 담배핀 갯수 입력

	hour = 365 * smoke * cigar * 3;
	min = 365 * smoke * cigar * 40;

	total_min = (hour * 60) + min;
	total_age = (100 * 365 * 24 * 60) - total_min;
	// total_min은 줄어든 수명을 분으로 환산
	// total_age는 총 수명 - 줄어든 수명을 분으로 환산

	hour += min / 60;
	min = min % 60;

	day = hour / 24;
	hour = hour % 24;

	year = day / 365;
	day = day % 365;

	printf("줄어든 수명 : %d년 %d일 %d시간 %d분\n", year, day, hour, min);

	year = 0, day = 0, hour = 0, min = 0;
	// 계산한 수명 초기화

	hour += total_age / 60;
	min = total_age % 60;

	day = hour / 24;
	hour = hour % 24;

	year = day / 365;
	day = day % 365;

	printf("기대 수명 : %d살 %d일 %d시간 %d분\n", year, day, hour, min);

	return 0;
}