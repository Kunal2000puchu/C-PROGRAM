//** Write a C program to input and print array elements using pointer.**//
#include<stdio.h>
#define max_size 20
int main()
{
    int arr[20];
    int i,n;
    int *ptr=arr;
    printf("enter the size of array:");
    scanf("%d",&n);
    
    printf("the elements of arrays are:");
    {
        for(i=0;i<n;i++);
        scanf("%d",&ptr[i]);
    }
    
    printf("%d",i[ptr]);
  
   
}

