#include <stdio.h>

int main()
{
    int N, K, i, j;

    scanf("%d %d", &N, &K);

    for (i = 1; i <= K; i++)
    {
        for (j = 1; j <= N; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}