// // Pass by Value

// #include <stdio.h>

// // Function to increment a value by 1
// void incrementByValue(int x)
// {
//     x++;
//     printf("Inside function: %d\n", x);
// }

// int main()
// {
//     int num = 5;
//     printf("Before function call: %d\n", num);
//     incrementByValue(num);
//     printf("After function call: %d\n", num);
//     return 0;
// }

// Pass by reference
#include <stdio.h>

// Function to increment a value by 1
void incrementByReference(int *x)
{
    (*x)++;
    printf("Inside function: %d\n", *x);
}

int main()
{
    int num = 5;
    printf("Before function call: %d\n", num);
    incrementByReference(&num);
    printf("After function call: %d\n", num);
    return 0;
}
