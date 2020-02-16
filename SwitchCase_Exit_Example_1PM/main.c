#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A, B;
    int a=5, b=7;
    int choice, remainder, number;

while(1){

    printf("Press 1. Addition\n");
    printf("Press 2. X -OR\n");
    printf("Press 3. EvenOdd\n");
    printf("Press 4. Exit\n");
    printf("Enter your Choice:");
    scanf("%d", &choice);

    switch(choice)
    {
    case 1:

    printf("Enter value for A and B");
    scanf("%d %d", &A, &B);

    printf("Addition is: %d\n", A+B);
    break;

    case 2:
        printf("X-OR is:%d\n", a ^ b);
        break;

    case 3:

        printf("Enter any Number:");
        scanf("%d", &number);

        remainder = number % 2;

        (remainder == 0) ? printf("Number is Even\n") : printf("Number is Odd\n");
        break;

    case 4:
        exit(0);
        //break;

    default:
        printf("You have entered the wrong case.");
    }
}

    return 0;
}
