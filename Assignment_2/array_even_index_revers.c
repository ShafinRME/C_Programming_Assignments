#include <stdio.h>

int main()
{
    int i, n;

    scanf("%d", &n);

    int arr[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = n - 1; i >= 0; i--)
    {
        if (i % 2 == 0)
        {
            printf("%d ", arr[i]);
        }
        else
        {
            continue;
        }
    }
    return 0;
}