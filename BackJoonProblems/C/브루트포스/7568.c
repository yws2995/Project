#include <stdio.h>

int main(void)
{
    int n, i, j;

    int weight[50] = {
        0,
    };
    int height[50] = {
        0,
    };
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d %d", &weight[i], &height[i]);
    }
    for (i = 0; i < n; i++)
    {
        int rank = 1;
        for (j = 0; j < n; j++)
        {
            if (weight[i] < weight[j] && height[i] < height[j])
            {
                rank++;
            }
        }
        printf("%d ", rank);
    }
}