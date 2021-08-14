#include <stdio.h>

int main(void)
{
    while (1)
    {
        int x, y, z;
        scanf("%d %d %d", &x, &y, &z);
        int num1 = x * x;
        int num2 = y * y;
        int num3 = z * z;

        if (x == 0 && y == 0 && z == 0)
            break;
        else if (x || y || z != 0)
        {
            if (num1 + num2 == num3 || num2 + num3 == num1 || num1 + num3 == num2)
            {
                printf("right\n");
            }
            else
                printf("wrong\n");
        }
    }
    return 0;
}