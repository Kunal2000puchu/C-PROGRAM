#include <stdio.h>
int main()
{
    int num,flag=1,i;
    printf("\n enter the number:");
    scanf("%d",&num);
    
    for(i=2;i<=num/2;i++)
    {
        if(num%i==0)
        {
        flag=0;
        break;
        }
    }
    if(flag==1)
    {
    printf("\n the number is prime");
    }
    else
    {
    printf("\n tne number is not prime");
    }
    return(0);
}
