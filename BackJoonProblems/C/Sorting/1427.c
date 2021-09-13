#include <stdio.h>
#include <string.h>

int main()
{
    char N[11] = {NULL};
    int tmp, i, j;
    gets(N); //gets함수가 문자열이라고 감지하는 기준은 개행문자다. 표준입력으로 들어온 \
    문자열을 개행한 부분 앞까지 짤라서 char* 타입의 문자열로 지정해주고,\
    자동으로 문자열 맨 끝에 \0을 넣어서 문자열을 완성해준다.
    for (i = 0; i < strlen(N) - 1; i++)
    {
        for (j = i; j < strlen(N); j++)
        {
            if (N[i] < N[j])
            {
                tmp = N[i];
                N[i] = N[j];
                N[j] = tmp;
            }
        }
    }
    puts(N);
    return 0;
}
