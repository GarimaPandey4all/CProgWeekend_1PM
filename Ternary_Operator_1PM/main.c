#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, Largest;

    printf("Enter vale for a:");
    scanf("%d", &a);

    printf("Enter vale for b:");
    scanf("%d", &b);

    printf("Enter vale for c:");
    scanf("%d", &c);

    Largest = (a>b) ? ((a>c)? a : c) : ((b>c)? b : c);

    printf("Largest Number is: %d", Largest);

    return 0;
}
