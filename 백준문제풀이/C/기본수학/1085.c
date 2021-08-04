#include <stdio.h>

int main(void)
{
    int x, y, w, h; //6 2 10 3
    scanf("%d %d %d %d", &x, &y, &w, &h);
    if (w - x < h - y) // 10-6 < 3-2? x
    {
        if (w - x > x)
            printf("%d", (x > y) ? y : x);
        else if (w - x > y)
            printf("%d", (y > x) ? x : y);
        else
            printf("%d", w - x);
    }
    else // 10-6 > 3-2
    {
        if (h - y > x)
            printf("%d", (x > y) ? y : x);
        else if (h - y > y)
            printf("%d", (y > x) ? x : y);
        else
            printf("%d", h - y);
    }

    return 0;
}
