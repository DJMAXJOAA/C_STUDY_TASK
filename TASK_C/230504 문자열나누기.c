#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// �Ķ���ͷ� �־����� ���ڿ��� const�� �־����ϴ�. �����Ϸ��� ���ڿ��� �����ؼ� ����ϼ���.
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