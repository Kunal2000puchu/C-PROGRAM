**//write a c pro to find a multipication of each number given by user//**

#include<stdio.h>
int main()
{
    int num, rem,newnum,oldnum;
    printf("\n enter the number:");
    scanf("%d",&num);
    oldnum=num;
    newnum=1;
    while(num>0)
    {
        rem=num%10;
        newnum=newnum*rem;
        num=num/10;
    }
    printf("\n the newnum is %d",newnum);
    return(0);
}