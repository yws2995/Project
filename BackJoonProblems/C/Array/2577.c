// #include <stdio.h>

// int main(void)
// {
//     int i, count, result;
//     int arr[10] = {
//         0,
//     };
//     int input, mul;
//     for (i = 0; i < 3; i++)
//     {
//         scanf("%d\n", &input);
//         mul *= input;
//     }
//     for (i = 0; mul > 0; i++)
//     {
//         result = mul % 10;
//         arr[result] += 1;
//         mul /= 10;
//     }

//     for (i = 0; i < 10; i++)
//     {
//         printf("%d\n", arr[i]);
//     }
//     return 0;
// }

#include <stdio.h>

int main(void)
{

    int arr[10] = {
        0,
    };
    int i, input, num = 0;
    int total = 1;

    for (i = 0; i < 3; i++)
    {
        scanf("%d", &input); //숫자 3개 입력
        total *= input;      //3개의 숫자의 곱
    }
    for (i = 0; total > 0; i++)
    {
        num = total % 10; //1의자리 추출
        total /= 10;      //자릿수 하나 줄임
        arr[num]++;       //해당하는 자릿수 count + 1
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d\n", arr[i]); //arr[0]~arr[9] 출력
    }

    return 0;
}