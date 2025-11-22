// Print the row number having max sum

#include <stdio.h>

void matrix (int r, int c, int arr[][c])
{
    int sum_after_row = 0, max_sum = 0, index, i;

    for (i = 0; i < r; i++)
    {
        sum_after_row = 0;
        for (int j = 0; j < c; j++)
        {
            printf("Enter the value of the element at (%d,%d): ", i+1, j+1);
            scanf("%d", &arr[i][j]);
            sum_after_row += arr[i][j];
            if (max_sum < sum_after_row)
            {
                max_sum = sum_after_row;
                index = i;
            }
        }
        printf("\n");
    }
    printf("\nMax sum is %d of row %d.\n", max_sum, i);
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