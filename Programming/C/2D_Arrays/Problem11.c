/* Spiral printing
1 2 3
4 5 6
7 8 9

Output =
1   2   3   6   9   8   7   4   5   */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void matrix (int r, int c, int arr[][c])
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter the value of the element at (%d,%d): ", i+1, j+1);
            scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }

    int* result = (int*) malloc (r*c*sizeof(int));

    int count = 0, min_row = 0, min_col = 0, max_row = r-1, max_col = c-1, index = 0;

    while (true)
    {
        for(int i = min_col; i <= max_col; i++) // Top rows
        {
            result[index] = arr[min_row][i];
            index++;
            count++;
        }

        if (count >= r*c) break;

        min_row++;


        for(int i = min_row; i <= max_row; i++) // Left Columns
        {
            result[index] = arr[i][max_col];
            index++;
            count++;
        }

        if (count >= r*c) break;
        
        max_col--;


        for(int i = max_col; i >= min_col; i--) // Bottom Rows
        {
            result[index] = arr[max_row][i];
            index++;
            count++;
        }

        if (count >= r*c) break;
        
        max_row--;


        for(int i = max_row; i >= min_row; i--) // Right Columns
        {
            result[index] = arr[i][min_col];
            index++;
            count++;
        }

        if (count >= r*c) break;
        
        min_col++;
    }

    for (int i = 0; i < r*c; i++) printf("%d  ", result[i]);
}


int main()
{
    int r, c;
    printf("Enter the order of the matrix (r c): ");
    scanf("%d %d", &r, &c);

    int a[r][c];

    printf("\n\nMATRIX:-\n\n");
    matrix(r, c, a);

    return 0;
}