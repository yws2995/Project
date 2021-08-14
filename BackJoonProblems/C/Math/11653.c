#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    int div = 2;
    if (n == 1)
    {
        return 0;
    }
    else
    {
        while (n != 1)
        {
            if (n % div == 0)
            {
                printf("%d\n", div);
                n /= div;
            }
            else
                div++;
        }
    }
    return 0;
}
// N의 소인수분해 결과를 한 줄에 하나씩 오름차순으로 출력한다. N이 1인 경우 아무것도 출력하지 않는다.
//