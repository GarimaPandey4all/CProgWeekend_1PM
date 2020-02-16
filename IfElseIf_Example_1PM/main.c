#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[10], i;
    float percentage, sum=0.0;

    printf("Enter 10 Marks:");

    for(i=0; i<10; i++)
        scanf("%d", &array[i]);

    for(i=0; i<10; i++)
        sum += array[i];

    printf("Sum of 10 Marks is: %f\n", sum);

    percentage = (sum/10);

    printf("Percentage is: %f\n", percentage);

    if(percentage >= 50 && percentage <= 60)
        printf("D Grade\n");

    else if(percentage >= 60 && percentage <= 70)
        printf("C Grade\n");

    else if(percentage >= 70 && percentage <= 80)
        printf("B Grade\n");

    else if(percentage >= 80 && percentage <= 100)
        printf("A Grade\n");

    else
        printf("Otherwise Fail...");

    return 0;
}
