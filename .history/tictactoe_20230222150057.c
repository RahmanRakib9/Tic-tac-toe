#include "stdio.h"
#include "stdbool.h"
// final phase

void printGridCell(int arr[][4], int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (arr[i][j] == -1) // for hide all -1
                printf(" ");

            if (j < n) // prevent the vertical right most side line
                printf("\t|\t");
        }
        printf("\n");
        if (i < n) // prevent the horizontal bottom most line
            printf("__________________________________");
        printf("\n");
    }
}

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

    bool player1 = true;
    bool player2 = false;

    while (true)
    {
        // display the grid cell
        printGridCell(arr, n);
        if (player1)
        {
            int r, c;
            scanf("%d%d", &r, &c);
            arr[r][c] = 1;

            player1 = false;
            player2 = true;
        }
        else
        {
            int r, c;
            scanf("%d%d", &r, &c);
            arr[r][c] = 2;

            player2 = false;
            player1 = true;
        }
    }
}