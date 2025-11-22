// Add 2 matrices

#include<stdio.h>


void matrix (int r, int c, int arr[][c])
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter the value of the element at (%d,%d): ", i+1, j+1);
            scanf("%d", &arr[i][j]);
        }
    }
}


int main()
{
    int r, c;
    printf("Enter the order of the matrices (r c): ");
    scanf("%d %d", &r, &c);

    int a[r][c], b[r][c];

    printf("\n\nMATRIX 1:-\n\n");
    matrix(r, c, a);

    printf("\n\nMATRIX 2:-\n\n");
    matrix(r, c, b);

    printf("\n\nRESULT MATRIX:-\n\n");

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++) printf("%d  ", a[i][j] + b [i][j]);

        printf("\n");
    }
    
    return 0;
}