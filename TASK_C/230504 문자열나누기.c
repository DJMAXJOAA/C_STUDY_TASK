#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* s) {
    int answer = 0;
    char x = *s;
    int x_count = 1;
    int y_count = 0;

    while (1)
    {
        if (*s == '\0')
        {
            return answer;
        }
        *s++;
        if (x == *s)
        {
            x_count++;
        }
        else
        {
            y_count++;
        }
        if (x_count == y_count)
        {
            if (*s != '\0')
            {
                x_count = 1;
                y_count = 0;
                answer++;

                *s++;
                x = *s;
            }
            else
            {
                answer++;
                return answer;
            }
        }
    }
    return answer;
}