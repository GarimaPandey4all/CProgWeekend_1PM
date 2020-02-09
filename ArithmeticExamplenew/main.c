#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;

    printf("Enter value for a:");
    scanf("%d", &a);

    printf("Enter value for b:");
    scanf("%d", &b);

    //Arithmetic Operator

    c = a+b;
    printf("\nAddition is:%d", c);

    c = a-b;
    printf("\nSubtraction is:%d", c);

    c = a*b;
    printf("\nMultiply is:%d", c);

    c = a/b;
    printf("\nDivision is:%d", c);

    c = a%b;
    printf("\nModulus is:%d", c);

    //Pre and Post Increment

    printf("\nPre-Increment is: %d", ++a); //a =8

    printf("\nPost-Increment is: %d", a++);

    printf("\nA is:%d", a);

    //Pre and Post Decrement

    printf("\nPre-Decrement is: %d", --b);

    printf("\nPost-Decrement is: %d", b--);

    printf("\nB is:%d", b);

    return 0;
}
