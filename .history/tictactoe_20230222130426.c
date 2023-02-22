#include "stdio.h"
#include "stdbool.h"
// final phase

int main(void)
{
    int n = 3;
    int arr[4][4];

    // after declare 2D array, initially set all array elements to -1 (-1 means there is no element exist)
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            arr[i][j] = -1;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (arr[i][j] == -1) // for hide all -1
                printf(" ");

            if (j < n) // for prevent the vertical right most side line
                printf("\t|\t");
        }
        printf("\n");
        if (i < n)//prevent
            printf("__________________________________"); // horizontal lines
        printf("\n");
    }
}