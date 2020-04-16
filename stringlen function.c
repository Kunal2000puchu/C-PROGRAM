/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#define MAX 20
int mystringlen(char str[MAX])
{
    int i;
    for(i=0;str[i]!='\0';i++);
    return(i);
}
int main()
{
    char str[MAX];
    int sz;
    printf("\n enter a string:");
    scanf("%s",str);
    sz=mystringlen(str);
    printf("\n the string %s has %d character",str,sz);
    return(0);
}