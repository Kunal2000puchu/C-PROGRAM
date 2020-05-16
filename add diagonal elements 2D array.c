//add diagonal elements of a matrix//
#include<stdio.h>
#define row 3
#define col 3
int main(){
   int sum=0,a[row][col],i,j;
   for(i=0;i<3;i++){
      for(j=0;j<3;j++)
      {
         printf("Enter arr[%d][%d]: ", i, j);
         scanf("%d",&a[i][j]);
      }
   }
   printf("sum of matrix is : %d",a[0][0] + a[row-1][col-1] + a[col-2][row-2] );
   return 0;
}