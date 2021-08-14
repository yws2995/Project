#include <stdio.h>
#include <malloc.h>

void bubbleSort(int arr[], int n)
{
    int i, tmp, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                tmp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = tmp;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
}

// void selectionSort(int arr[], int n){}
// void insertionSort(int arr[], int n) {}
int main(void)
{
    int n, i;
    int arr[1001] = {
        0,
    };

    scanf("%d\n", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // selectionSort(arr, n);
    bubbleSort(arr, n);
    // insertionSort(arr, n);

    return 0;
}
