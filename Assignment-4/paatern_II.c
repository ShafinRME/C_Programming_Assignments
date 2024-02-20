#include <stdio.h>

int main()
{
    int i, j, k, m, l, n;

    scanf("%d", &n);

    k = n;
    m = 1;

    for (i = 1; i <= n; i++)
    {
        for (j = k - 1; j > 0; j--)
        {
            printf(" ");
        }
        k--;

        if (m <= n)
        {
            for (l = 1; l <= m; l++)
            {
                printf("%d", m);
            }
            printf("\n");
            m++;
        }
    }

    return 0;
}