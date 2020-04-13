/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#define MAX 20
int main()
{
    char str[MAX],rev[MAX];
    int i,j=0;
    printf("\n enter a string");
    scanf("%s",str);
    while(str[i]!='\0')
    i++;
    i--;
    while(i>=0)
    {
        rev[j]=str[i];
        j++;
        i--;
    }
    printf("\n the string is %s",rev);

    return 0;
    
}