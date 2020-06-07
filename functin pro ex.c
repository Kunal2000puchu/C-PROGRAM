#include<stdio.h>

int g(int x, int y);     // function declaration

int main() 
{
    int i, j, result;
    printf("Please enter 2 numbers you want to get result..");
    scanf("%d%d", &i, &j);
    
    result = g(i, j);        // function call
    printf("The result  is: %d", result);
    
    return 0;
}


int g (int x, int y) // function defination
{
  x = x + y;
  int z = 2 * x - y;
  return z;
}