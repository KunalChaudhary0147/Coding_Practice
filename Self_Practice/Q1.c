// Transpose of a Matrix

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

    // Transpose of Matrix
    for (int i = 0; i < r-1; i++)
    {
        for (int j = i+1; j < c; j++)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
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