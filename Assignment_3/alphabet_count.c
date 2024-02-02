#include <stdio.h>
#include <string.h>
int main()
{
    char str[1001];
    scanf("%s", str);

    int cnt[26] = {0};
    int i;
    for (i = 0; i < strlen(str); i++)
    {
        cnt[str[i] - 'a']++;
    }
    for (i = 0; i < 26; i++)
    {
        printf("%c - %d\n", i + 97, cnt[i]);
    }
    return 0;
}