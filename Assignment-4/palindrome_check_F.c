#include <stdio.h>
#include <string.h>

int is_palindrome(char character[])
{
    int i, j, length, flag = 0;
    length = strlen(character);
    i = 0;
    j = length - 1;
    while (i <= j)
    {
        if (character[i] == character[j])
        {
            i++;
            j--;
            continue;
        }
        else
        {
            i++;
            j--;
            flag++;
        }
    }

    if (flag == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    char character[10];
    scanf("%9s", character); // Limit input length to 9 characters

    int outPalindrome = is_palindrome(character);
    if (outPalindrome == 1)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
    return 0;
}

// #include <stdio.h>
// #include <string.h>

// int is_palindrome(char character[])
// {
//     int i, j, length, flag = 0;
//     length = strlen(character);
//     i = 0;
//     j = length - 1;
//     while (i <= j)
//     {
//         if (character[i] == character[j])
//         {
//             i++;
//             j--;
//             continue;
//         }
//         else
//         {
//             i++;
//             j--;
//             flag++;
//         }
//     }

//     if (flag == 0)
//     {
//         return 1;
//     }
//     else
//     {
//         return 0;
//     }
// }

// int main()
// {
//     char character[10];
//     scanf("%s", character);

//     int outPalindrome = is_palindrome(character);
//     if (outPalindrome == 1)
//     {
//         printf("Palindrome");
//     }
//     else
//     {
//         printf("Not Palindrome");
//     }
//     return 0;
// }