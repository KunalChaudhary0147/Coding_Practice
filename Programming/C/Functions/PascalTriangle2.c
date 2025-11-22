// Method 2 (Ultimate Method)

#include <stdio.h>

int main()
{
    int row;

    printf("Enter number of rows: ");
    scanf("%d", &row);

    for (int i = 0; i < row; i++)
    {
        int first = 1;

        for (int space = 0; space < row - i - 1; space++) printf(" ");

        for (int j = 0; j <= i; j++)
        {
            printf("%d ", first);

            first = first * (i-j)/(j+1);
        }
    
        printf("\n");
    }

    return 0;
}
