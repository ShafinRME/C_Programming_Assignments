#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);
    if (num >= 0)
    {
        if (num % 3 == 0)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }

    return 0;
}