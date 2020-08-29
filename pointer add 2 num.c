//** Write a C program to add two numbers using pointers.**//

#include <stdio.h>
int main()
{
   int x,y, *p, *q, sum;

   printf("Enter two integers to add\n");
   scanf("%d%d", &x, &y);

   p = &x;
   q = &y;

   sum = *p + *q;

   printf("Sum of the numbers = %d\n", sum);

   return 0;
}
