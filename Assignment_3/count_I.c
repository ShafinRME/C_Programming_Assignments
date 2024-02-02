#include <stdio.h>

int main()
{
    int n, i;
    scanf("%d", &n);

    int arr[n + 1];

    int sumEven = 0, sumOdd = 0;

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0)
        {
            sumEven++;
        }
        else
        {
            sumOdd++;
        }
    }

    printf("%d %d\n", sumEven, sumOdd);

    return 0;
}