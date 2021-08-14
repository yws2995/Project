#include <stdio.h>

int main(void)
{
    int i, n;
    double grade[1000];
    double average, sum = 0;
    double max = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {

        scanf("%lf", &grade[i]);
        if (max < grade[i])
            max = grade[i];
    } //점수 중에 최댓값을 고름
    for (i = 0; i < n; i++)
    {
        grade[i] = grade[i] / max * 100.0;
        sum += grade[i];
    }
    average = sum / (double)n;
    printf("%.2lf\n", average);
    return 0;
}