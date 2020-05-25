//** write a c pro to find a length of a array**//
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
