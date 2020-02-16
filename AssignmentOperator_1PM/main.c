#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum=0, array[10],i;

    printf("Enter any values in an array:");

    for(i=0; i<10; i++)
        scanf("%d", &array[i]);

    for(i=0; i<10; i++)
        sum += array[i]; //sum = sum + array[];

    printf("Sum is:%d", sum);

    return 0;
}
