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
        /* 1. ���� ���� �� ���� / ��ȯ�� �ʿ��� �� ���� == 0 (��ȯ �Ұ�) */
        if (n / a == 0)
        {
            n += count; count = 0;  // �ܿ� ���� ���ϰ�, �ʱ�ȭ
            if (n / a == 0)
            {
                break;      // �׷��� ��ȯ ���ϸ� ����
            }  
            count += n % a; // �ܿ� �� ���
        }
        else
        {
            count += n % a;
        }
        /* 2. ��ȯ�� �� ����(���� ���� �� ����) ��� */
        answer += n / a * b;
        n = n / a * b;
    }
    return answer;
}