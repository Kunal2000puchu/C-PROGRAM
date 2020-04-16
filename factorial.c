/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<stdio.h>

int main()
{
int n,f=1,i;
printf("Enter the number");
scanf("%d",&n);
for(i=1;i<=n;i++)
f=f*i;
printf("The factorial is %d",f);
return(0);
}
