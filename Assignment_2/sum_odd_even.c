#include <stdio.h>

int main()
{
    int n, i, oddSum = 0, evenSum = 0;

    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0)
        {
            evenSum += arr[i];
        }
        else
        {
            oddSum += arr[i];
        }
    }

    printf("%d %d\n", evenSum, oddSum);
    return 0;
}