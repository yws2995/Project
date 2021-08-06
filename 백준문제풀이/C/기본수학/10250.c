#include <stdio.h>

int main(void)
{
    int t, i;
    int floor = 1;

    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        int h, w, n;
        int room = 1;
        scanf("%d %d %d", &h, &w, &n);
        while (n > 0)
        {
            if (n <= h)
            {
                floor = n;
                break;
            }
            else if (n >= h)
            {
                n -= h;
                room++;
            }
        }
        printf("%d", floor * 100 + room);
    }

    return 0;
}