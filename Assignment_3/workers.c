#include <stdio.h>

int main()
{
    int M1, M2, D, days;

    scanf("%d %d %d", &M1, &M2, &D);

    days = (M1 * D) / M2;

    printf("%d", days);

    return 0;
}