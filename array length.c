/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#define MAX 20
int main()
{
char str[MAX];int i;
printf("\n enter a string:");
scanf("%s",str);
while(str[i]!='\0')

    
    i++;

printf("\n the length of string is :%d",i);
return(0);
}