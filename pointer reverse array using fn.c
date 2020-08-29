//**Write a program to reverse a string use functions and pointers**//

#include<stdio.h>
#include <string.h>

void reverse(char* );  //function declartion
 
int main()
{
   char string[100];
    
   printf("Enter a string: ");
   scanf("%s",string);
 
   reverse(string);    //function calling
 
   return 0;
}
 
void reverse(char *p)  //function defination
{
   
    int i,c = 0;
    for(i=0;*(p+i)!='\0';i++)
   {
       c++;
   }
   
   printf("Reverse string= ");
   for(i=c-1;i>=0;i--)
   {
       printf("%c",*(p+i));
   }
}
 


