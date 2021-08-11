#include <stdio.h>

int main(void)
{
    int i, n;
    int check = 0;
    char ch;
    int count = 0;
    while ((ch = getchar()) != EOF)
    {
        scanf("%d", &n);
        // n <= i <= 2n  i중에서 소수의 개수를 찾아라. 소수를 찾으려면? -> 1부터 n-1까지 나눠서 전부 검사해 본다.\
         1. 재귀함수를 돌린다 2. for ~ if 문으로 해결한다.
        for (i = n; i < 2 * n; i++)
            `
            {
                int x;
                // i가 소수인지 판별
                for (x = 0; x < i; x++)
                {
                    //if ( i % x == 0) 인 j가 있으면 소수가 아니므로
                    if (i % x == 0)
                    {
                        check = 1;
                        break;
                    }
                } //for 문의 검사 결과 check가 0인 경우라면 소수이다. check가 0으로 끝나는 경우에 대해서 count++;
            }
    }

    return 0;
}

/*
if (check == 0 && 조건2)
{
    printf("%d\n", count);
}
*/