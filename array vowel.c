/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


#include <stdio.h>
#define MAX 20
int main()
{
char str[MAX];int i=0,c=0;
printf("\n enter a string:");
scanf("%s",str);
while(str[i]!='\0')
{
    if (str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
    c++;
}
printf("\n the number of vowel is :%d",c);
return(0);
}

