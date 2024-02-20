//<----------- 1. Has Return + Parameter -------------->
////////////////////////////////////////////////////////

// #include <stdio.h>

// int sumThese(int n1, int n2)
// {
//     int sum;
//     sum = n1 + n2;
//     return sum;
// }

// int main()
// {
//     int num1, num2;

//     scanf("%d %d", &num1, &num2);

//     int summation = sumThese(num1, num2);

//     printf("%d", summation);
//     return 0;
// }
/////////////////////////////////////////////////////

// <------------------ Has Return + No Parameter ---------------------->
///////////////////////////////////////////////////////
// #include <stdio.h>

// int divisible()
// {
//     int n1, n2, flag;
//     scanf("%d %d", &n1, &n2);
//     if (n1 % n2 == 0 || n2 % n2 == 0)
//     {
//         flag = 1;
//         return flag;
//     }
//     else
//     {
//         flag = 0;
//         return flag;
//     }
// }

// int main()
// {

//     int outDivisible = divisible();

//     if (outDivisible == 1)
//     {
//         printf("They are divisible by each other");
//     }
//     else
//     {
//         printf("They are not divisible by each other");
//     }
//     return 0;
// }
/////////////////////////////////////////////////////

//<--------------------  No Return has Parameter -------------------->
////////////////////////////////////////////////

// #include <stdio.h>

// int lessEqualZero(int num1, int num2)
// {
//     if (num1 <= 0 || num2 <= 0)
//     {
//         printf("These numbers is equal or less than zero\n");
//     }
//     else
//     {
//         printf("These number is greater than zero\n");
//     }
// }

// int main()
// {
//     int n1, n2;
//     scanf("%d %d", &n1, &n2);

//     lessEqualZero(n1, n2);

//     return 0;
// }

/////////////////////////////////////////////////////

//<--------------------  No Return No Parameter -------------------->
////////////////////////////////////////////////

#include <stdio.h>

void lessEqualGreater()
{

    int num1, num2;
    scanf("%d %d", &num1, &num2);
    if (num1 > num2)
    {
        printf("%d is greater than %d", num1, num2);
    }
    else if (num1 < num2)
    {
        printf("%d is greater than %d", num2, num1);
    }
    else
    {
        printf("%d is equal to %d", num1, num2);
    }
}

int main()
{
    lessEqualGreater();

    return 0;
}