/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#define MAX 20
int main()
{
char str[MAX];
int i=0,alpha=0,digit=0,spec=0;
printf("\n enter a string:");
scanf("%s",str);
while(str[i]!='\0')
{
 if (str[i]>='A'&&str[i]<='Z'||str[i]>='a'&&str[i]<='z')
 {
 alpha++;
 }
 else if(str[i]>='0'&&str[i]<='9')
 {
 digit++;
}
 else
 spec++;
 i++;
}
printf("\n number of alphabets :%d",alpha);
printf("\n number of digit :%d",digit);
printf("\n number of spec :%d",spec);
return(0);
}