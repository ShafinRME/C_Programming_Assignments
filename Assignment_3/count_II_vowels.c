#include <stdio.h>
#include <string.h>

int main()
{
    char str[1001];

    scanf("%s", &str);

    int i, vowelCount = 0;
    for (i = 0; i < strlen(str); i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            vowelCount++;
        }
    }

    printf("%d", vowelCount);
    return 0;
}