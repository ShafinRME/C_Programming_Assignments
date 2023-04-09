#include <stdio.h>

int main()
{
    int i, num;
    scanf("%d", &num);
    if (num <= 10000 && num >= 21)
    {
        for (i = 21; i <= num; i++)
        {
            if (i % 21 == 0)
            {
                printf("%d\n", i);
            }
        }
    }

    return 0;
}