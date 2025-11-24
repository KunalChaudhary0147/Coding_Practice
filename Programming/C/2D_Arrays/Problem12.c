/* Create matrix in spiral way
Output = 
1 2 3
8 9 4
7 6 5   */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void matrix (int n)
{
    int result[n][n];
    
    int count = 0, min_row = 0, min_col = 0, max_row = n-1, max_col = n-1;

    while (true)
    {
        for(int i = min_col; i <= max_col; i++) // Top rows
        {
            count++;
            result[min_row][i] = count;            
        }

        if (count >= n*n) break;

        min_row++;


        for(int i = min_row; i <= max_row; i++) // Left Columns
        {
            count++;
            result[i][max_col] = count;
        }

        if (count >= n*n) break;
        
        max_col--;


        for(int i = max_col; i >= min_col; i--) // Bottom Rows
        {
            count++;
            result[max_row][i] = count;
        }

        if (count >= n*n) break;
        
        max_row--;


        for(int i = max_row; i >= min_row; i--) // Right Columns
        {
            count++;
            result[i][min_col] = count;
        }

        if (count >= n*n) break;
        
        min_col++;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++) printf("%d ", result[i][j]);
        printf("\n");
    }
}


int main()
{
    int n;
    printf("Enter the order of the square matrix: ");
    scanf("%d", &n);

    printf("\n\nMATRIX:-\n\n");
    matrix(n);

    return 0;
}