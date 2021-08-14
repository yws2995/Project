// #include <stdio.h>

// int main(void)
// {
//     int t, i;
//     scanf("%d\n", &t); //테스트케이스의 반복횟수
//     for (i = 0; i < t; i++)
//     {
//         int r, j, k;            //반복횟수 r
//         char arr[21];           ////문자열 s
//         scanf("%d\n", &r);      //몇 번 반복할 지
//         scanf("%s", arr);       // 배열 형태로 문자 저장
//         for (k = 0; k < r; i++) //r번 반복
//         {
//             for (j = 0; j < r; j++) //arr[0]부터
//             {
//                 printf("%c", arr[k]); //r이 5라면 arr[0]을 5번 반복~arr[-1] 5번 반복
//             }
//         }
//         printf("\n"); //줄 바꾸고 1가 1일 경우 즉 두 번쨰 테스트 케이스를 실행해야 하는데 끝나버림.
//         //왜냐면 i는 for문안에서 다른 값이 되었기 때문.
//     }
//     return 0;
// }

#include <stdio.h>
#include <string.h>

int main(void)
{
    int i, j, n;
    char p[21];

    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &j);
        scanf("%s", p);
        print(p, j);
    }
    return 0;
}

int print(char a[], int b)
{
    int i, j;
    for (i = 0; i < strlen(a); i++)
    {
        for (j = 0; j < b; j++)
        {
            printf("%c", a[i]);
        }
    }
    printf("\n");
}