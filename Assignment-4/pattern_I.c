#include <stdio.h>

int main()
{
    int i, j, k, l, m, n;

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
            for (l = 1; l <= 2 * m - 1; l++)
            {
                printf("%d", l);
            }
            printf("\n");
            m++;
        }
    }

    int o, p, q, r, s, x;

    o = n - 1;
    x = n - 1;
    p = 1;
    for (s = 1; s <= o; s++)
    {
        if (p <= o)
        {
            for (q = 1; q <= p; q++)
            {
                printf(" ");
            }
            p++;
        }
        if (x >= 1)
        {
            for (r = 1; r <= 2 * x - 1; r++)
            {
                printf("%d", r);
            }
            printf("\n");
            x--;
        }
    }

    return 0;
}