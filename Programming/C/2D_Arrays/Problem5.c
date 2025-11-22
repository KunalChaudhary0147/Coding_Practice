// Max and min element and their positions

#include <stdio.h>
#include <limits.h>

void matrix (int r, int c, int arr[][c])
{
    int max = INT_MIN, max_index_r, max_index_c, min = INT_MAX, min_index_r, min_index_c;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter the value of the element at (%d,%d): ", i+1, j+1);
            scanf("%d", &arr[i][j]);

            if (arr[i][j] > max)
            {
                max = arr[i][j];
                max_index_r = i;
                max_index_c = j;
            }

            if (arr[i][j] < min)
            {
                min = arr[i][j];
                min_index_r = i;
                min_index_c = j;
            }

            printf("\n");
        }
    }
    printf("\nMaximum element is %d at position (%d,%d)\n", max, max_index_r+1, max_index_c+1);
    printf("Minimum element is %d at positin (%d,%d)\n", min, min_index_r+1, min_index_c+1);
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