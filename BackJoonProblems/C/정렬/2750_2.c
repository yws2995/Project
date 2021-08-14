#include <stdio.h>
#include <malloc.h>

int main(void)
{
    int n, i, *array;

    scanf("%d\n", &n);
    array = malloc(n * sizeof(int));

    for (i = 0; i < n; i++)
    {
        scanf("%d\n", array + i)
    }
}