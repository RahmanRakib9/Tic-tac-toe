#include "stdio.h"
#include "stdbool.h"
// final phase
// after declare 2D array, initially set all array elements to -1 (-1 means there is no element exist)

int main(void)
{
    int n = 3;
    int arr[4][4];

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            arr[i][j] = -1;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            printf("%d ", arr[i][j]);
            
    }
}