#include<stdio.h>
int main()
{
    int a,b,c,i,range;
    a=0,b=1;
    printf("\n enter the range:");
    scanf("%d",&range);
    for(i=1;i<=range;i++)
    {
        c=a+b;
        printf("the output is %d",c);
        a=b;
        b=c;
    }
    return(0);
}