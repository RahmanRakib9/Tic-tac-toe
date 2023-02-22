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
            if (arr[i][j] == 1) // 1 means X
                printf("X");
            if (arr[i][j] == 2) // 2 means O
                printf("O");

            if (j < n) // prevent the vertical right most side line
                printf("\t|\t");
        }
        printf("\n");
        if (i < n) // prevent the horizontal bottom most line
            printf("__________________________________");
        printf("\n");
    }
}

int isWin(int arr[][4], int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (arr[i][1] == arr[i][2] && arr[i][2] == arr[i][3] && arr[i][1] != -1)
        {
            return arr[i][1];
        }
    }
    for(int j=1;j<=n;j++)
    {
        if(arr[1][j]==arr[2][j] && arr[2][j]==arr[])
    }
    return -1;
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
        Flag:
            printf("Player 1 Turn (X),Enter Row and Column:  ");
            scanf("%d%d", &r, &c);
            if (arr[r][c] != -1)
            {
                printf("Invalid Cell\n");
                goto Flag;
            }
            arr[r][c] = 1;

            player1 = false;
            player2 = true;
        }
        else
        {
            int r, c;
        Flag2:
            printf("Player 2 Turn (O),Enter Row and Column:  ");
            scanf("%d%d", &r, &c);
            if (arr[r][c] != -1)
            {
                printf("Invalid Cell\n");
                goto Flag2;
            }
            arr[r][c] = 2;

            player2 = false;
            player1 = true;
        }
    }
}