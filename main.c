#include <stdio.h>

int main()
{

int n,x=2;
printf("\n enter the value of n: ");
scanf("%d",&n);
for (int i = 0; i < n; i++)
{
    if (i % 2 == 0)
    {
      x *= i + 1;
      continue;
    }
   x--;
      if (x == 0)
      {
        break;
      }
  
}
printf("the ans is %d\n",x);
 return x;
}

