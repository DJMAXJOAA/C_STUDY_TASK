#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main()
{
    int a = solution(3, 2, 10);
    printf("%d", a);
}

int solution(int a, int b, int n) {
    int answer = 0;
    int count = 0;
    while (1)
    {
        /* 1. 현재 가진 병 갯수 / 교환시 필요한 병 갯수 == 0 (교환 불가) */
        if (n / a == 0)
        {
            n += count; count = 0;  // 잔여 병을 더하고, 초기화
            if (n / a == 0)
            {
                break;      // 그래도 교환 못하면 종료
            }  
            count += n % a; // 잔여 병 계산
        }
        else
        {
            count += n % a;
        }
        /* 2. 교환한 병 갯수(현재 가진 병 갯수) 계산 */
        answer += n / a * b;
        n = n / a * b;
    }
    return answer;
}