#include<stdio.h>  //Preprocessor Directives
#include<conio.h>   //console input/ouput

int main()
{
   int a, b, c, d;

   clrscr();   // Clear Screen

   printf("Enter value for a:");
   scanf("%d", &a);

   printf("Enter value for b:");
   scanf("%d", &b);

   c = a + b;

   printf("Addition of Two numbers is:%d", c);

  //printf("Enter value for d:");
   //scanf("%d", &d);

   getch();   //get character

   return 0;
}