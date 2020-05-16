**//decaration of array//**
#include<stdio.h>
#define ROW 3
#define COL 3
 
int main()
{
    int arr[ROW][COL], i, j;
 
    for(i = 0; i < ROW; i++)
    {
        for(j = 0; j < COL; j++)
        {
            printf("Enter arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
 
    printf("\n the matrix is:\n\n");
 
    for(i = 0; i < ROW; i++)
    {
        for(j = 0; j < COL; j++)
        {
            printf("%d ", arr[i][j] );
        }
        printf("\n");
    } 
    return(0);
}