#include <stdio.h>
#include <string.h>

int main()
{
    char str[1001];
    scanf("%s", str);

    int capitalCount = 0, smallCount = 0, i;

    for (i = 0; i < strlen(str); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            capitalCount++;
        }
        else
        {
            smallCount++;
        }
    }

    printf("%d %d", capitalCount, smallCount);

    return 0;
}