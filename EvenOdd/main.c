#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, remainder;

    printf("Enter any number:");
    scanf("%d", &number);

    remainder = number % 2;

//    if(remainder == 0)
//        printf("Number is Even");
//    else
//        printf("Number is Odd");

    (remainder == 0)? printf("Number is Even") : printf("Number is Odd");

    return 0;
}
