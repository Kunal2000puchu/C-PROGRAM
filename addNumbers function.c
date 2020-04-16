#include<stdio.h>
int addNumbers(int a,int b);
int main()

{
int m,n,sum;
printf("\n enter two numbers:");
scanf("%d%d",&m,&n);
sum=addNumbers(m,n);
printf("\n sum is %d",sum);
return(0);
}
int addNumbers(int a,int b)
{
    int result;
    result=a+b;
    return(result);

}