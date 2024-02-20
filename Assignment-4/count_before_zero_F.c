#include <stdio.h>

int count_before_zero(int arr[], int n)
{
    int count = 0, i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            count++;
        }
        else
        {
            return count;
        }
    }
}

int main()
{
    int n, i;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int outCount = count_before_zero(arr, n);
    printf("%d", outCount);

    return 0;
}