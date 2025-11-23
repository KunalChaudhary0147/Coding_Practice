// Rotate matrix by 90 degree

#include <stdio.h>

void matrix (int r, int c, int arr[][c])
{
    // Input Elements
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter the value of the element at (%d,%d): ", i+1, j+1);
            scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }

    // Transpose of matrix
    for (int i = 0; i < r-1; i++)
    {
        for (int j = i+1; j < c; j++)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

    // Swapping every 'i'th column with 'c-i'th column
    for (int i = 0; i < r; i++)
    {
        int j_start, j_end = c - 1;
        for (j_start = 0; j_start < j_end; j_start++, j_end--)
        {
            int temp = arr[i][j_start];
            arr[i][j_start] = arr[i][j_end];
            arr[i][j_end] = temp;
        }
    } 

    printf("\n\nResult Matrix:-\n");

    // Printing Matrix
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++) printf("%d ", arr[i][j]);

        printf("\n");
    }
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