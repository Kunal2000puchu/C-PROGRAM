//capital to lower//

#include <stdio.h>
#define MAX 20
int main()
{
char str[MAX];int i=0,c=0;
printf("\n enter a string:");
scanf("%s",str);
while(str[i++]!='\0')
{
 if (str[i]>='A'&&str[i]<='Z')
 str[i]=str[i]-('A'-'a');
}
printf("\n the length of string is :%s",str);
return(0);
}
