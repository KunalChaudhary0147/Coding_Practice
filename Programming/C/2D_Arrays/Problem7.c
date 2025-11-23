// Row with maximum number of 1's

#include <stdio.h>

void matrix (int r, int c, int arr[][c])
{
    int count = 0, max_count = 0, index;

    for (int i = 0; i < r; i++)
    {
        count = 0;
        for (int j = 0; j < c; j++)
        {
            printf("Enter the value of the element at (%d,%d): ", i+1, j+1);
            scanf("%d", &arr[i][j]);
            if (arr[i][j] == 1) count += 1;
        }

        if (max_count < count)
        {
            max_count = count;
            index = i;
        }

        printf("\n");
    }
    printf("\nMax number of 1 is %d in row %d.\n", max_count, index + 1);
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