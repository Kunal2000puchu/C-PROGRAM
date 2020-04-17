#include<stdio.h>
int main()
{
    int num, rem,newnum,oldnum;
    printf("\n enter the number:");
    scanf("%d",&num);
    oldnum=num;
    newnum=0;
    while(num>0)
    {
        rem=num%10;
        printf("%d",rem);
        num=num/10;
        newnum=newnum*10+rem;
    }
    return(0);
}