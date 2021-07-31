#include <stdio.h>

int main(void)
{
    int hour, minute;

    scanf("%d %d", &hour, &minute);
    if (minute > 45)
    {
        printf("%d %d", hour, minute - 45);
    }
    else if (minute < 45 && 0 < hour < 24)
    {
        printf("%d %d", hour - 1, minute + 15);
    }
    else
    {
        printf("0 %d", minute + 15);
    }
    return 0;
}