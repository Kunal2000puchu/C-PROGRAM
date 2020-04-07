//Write a C program to check whether a number is negative, positive or zero
#include<stdio.h>
void clrscr()
{                                      
 
}

void main()
{
 int a;                               
 clrscr();
 printf("\nEnter number  :");
 scanf("%d",&a);
 if(a>0)                                      
  {
    printf("\nEntered number is positive");
  }
 else if(a>0)
  {
    printf("\nEntered number is negitive");
  }
 else
  {
    printf("\nEntered number is zero");
  }
 getch();
}
