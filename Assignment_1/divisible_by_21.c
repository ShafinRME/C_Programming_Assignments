#include <stdio.h>

int main()
{
    int n, i;
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if (i % 21 == 0)
        {
            printf("%d\n", i);
        }
        else
        {
            continue;
        }
    }
    return 0;
}