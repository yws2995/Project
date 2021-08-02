// #include <stdio.h>
// int main(void)
// {
//     int i;
//     char word[100] = {
//         0,
//     };
//     scanf("%s", word);

//     for (i = 97; i <= 122; i++)
//     {
//         int j = 0;
//         while (word[j] != 0)
//         {
//             if (word[j] == (char)i)
//             {
//                 break;
//                 j++;
//             }
//         }
//         if (word[j] == (char)i)
//         {
//             printf("%d", j);
//         }
//         else
//         {
//             printf("-1");
//         }
//     }
//     return 0;
// }

#include <stdio.h>
#include <string.h>
int main(void)
{
    char str[100];
    scanf("%s", str);
    int arr[26];
    int n;
    //출력을 위한 arr배열 초기화
    for (int i = 0; i < 26; i++)
    {
        arr[i] = -1;
    }
    //알파벳 위치 확인
    for (int i = 0; i < strlen(str); i++)
    {
        n = str[i] - 'a';
        if (arr[n] == -1)
        {
            arr[n] = i;
        }
    }
    //결과 출력
    for (int i = 0; i < 26; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}