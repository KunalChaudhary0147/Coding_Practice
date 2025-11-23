/* Wave printing - 2
1 2 3
4 5 6
7 8 9

Output =
7 4 1
2 5 8
9 6 3    */

#include <stdio.h>
#include <stdbool.h>

void matrix (int r, int c, int arr[][c])
{
    bool val = true;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter the value of the element at (%d,%d): ", i+1, j+1);
            scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < c; i++)
    {
        if (val)
        {
            for (int j = r - 1; j >= 0; j--) printf("%d ", arr[j][i]);
            val = false;
        }

        else
        {
            for (int j = 0; j < c; j++) printf("%d ", arr[j][i]);
            val = true;
        }
        
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