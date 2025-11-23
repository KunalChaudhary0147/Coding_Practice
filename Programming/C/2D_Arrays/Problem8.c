// Multiplication of 2 matrices

#include <stdio.h>
#include <stdlib.h>

void multiplication(int r1, int c1, int a[][c1], int r2, int c2, int b[][c2])
{
    int **c = (int**) malloc (r1*sizeof(int*));
    for (int i = 0; i < r1; i++) c[i] = (int*) malloc (c2*sizeof(int));

    for (int row1 = 0; row1 < r1; row1++)
    {
        for (int col2 = 0; col2 < c2; col2++)
        {
            int cn = 0;
            c[row1][col2] = 0;

            while (cn < c1)
            {
                c[row1][col2] += a[row1][cn]*b[cn][col2];
                cn++;
            }
        }
    }
    
    // Printing Matrix
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++) printf("%d ", c[i][j]);

        printf("\n");
    }
}

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
}


int main()
{
    int r1, c1, r2, c2;
    printf("Enter the order of the matrix 1 (r c): ");
    scanf("%d %d", &r1, &c1);

    printf("Enter the order of the matrix 2 (r c): ");
    scanf("%d %d", &r2, &c2);

    if (c1 != r2)
    {
        printf("\n\nThe given two matrices cannot be multiplied.");
        return 0;
    }

    int a[r1][c1], b[r2][c2];
    
    // Input Elements of Matrix 1

    printf("\n\nMATRIX  1:-\n");
    matrix(r1, c1, a);


    // Input Elements of Matrix 2

    printf("\n\nMATRIX  2:-\n");
    matrix(r2, c2, b);

    printf("\n\nResult Matrix:-\n");
    // Multiplication and printing of resultant matrix
    multiplication(r1, c1, a, r2, c2, b);

    return 0;
}