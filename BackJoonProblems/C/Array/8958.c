// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
//     int i, j, input, sum, score;
//     char arr[80];

//     scanf("%d", &input);
//     for (i = 0; i < input; i++)
//     {
//         sum = 0;
//         score = 1;
//         scanf("%s", &arr);
//         for (j = 0; j < strlen(arr); j++)
//         {
//             if (arr[j] == 'O')
//             {
//                 sum += score;
//                 score++;
//             }
//             if (arr[j] == 'X')
//                 score = 1;
//         }
//     }
//     printf("%d\n", sum);
//     return 0;
// }
#include <stdio.h>
#include <string.h>

int main(void)
{

    int input, score, sum;
    char test[80];

    scanf("%d", &input);

    for (int i = 0; i < input; i++)
    {
        sum = 0;
        score = 1;
        scanf("%s", test);
        for (int j = 0; j < strlen(test); j++)
        {
            if (test[j] == 'O')
            {
                sum += score;
                score++;
            }
            if (test[j] == 'X')
                score = 1;
        }
        printf("%d\n", sum);
    }
}