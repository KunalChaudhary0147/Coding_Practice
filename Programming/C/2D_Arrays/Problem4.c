// Sum of all elements in the array (Total n after each row)

#include <stdio.h>

void matrix (int r, int c, int arr[][c])
{
    int sum_after_row = 0, total_sum = 0;

    for (int i = 0; i < r; i++)
    {
        sum_after_row = 0;
        for (int j = 0; j < c; j++)
        {
            printf("Enter the value of the element at (%d,%d): ", i+1, j+1);
            scanf("%d", &arr[i][j]);
            sum_after_row += arr[i][j];
            total_sum += arr[i][j];
        }
        printf("Sum after row %d: %d\n", i+1, sum_after_row);
        printf("\n");
    }
    printf("\nTotal sum of all elements: %d\n", total_sum);
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