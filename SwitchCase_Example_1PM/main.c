#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A, B;
    char operator;

    printf("Enter any Operator");
    scanf("%c", &operator);

    printf("Enter value for A:");
    scanf("%d", &A);

    printf("Enter value for B:");
    scanf("%d", &B);

    switch(operator)
    {
    case '+':
        printf("Addition is: %d", A+B);
        break;

    case '-':
        printf("Subtraction is: %d", A-B);
        break;

    case '*':
        printf("Multiplication is: %d", A*B);
        break;

    case '/':
        printf("Division is: %d", A/B);
        break;

    case '%':
        printf("Modulus is: %d", A%B);
        break;

    default:
        printf("You have entered the wrong Operator");

    }

    return 0;
}
