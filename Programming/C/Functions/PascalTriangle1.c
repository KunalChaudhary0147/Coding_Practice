// Method 1 (Long Method)

#include <stdio.h>

int factorial (int n)
{
    if (n == 0 || n == 1) return 1;
    else return n * factorial(n-1);
}

int main()
{
    int row;

    printf("Enter number of rows: ");
    scanf("%d", &row);

    for (int i = 0; i < row; i++)
    {
        for (int space = 0; space < row - i - 1; space++) printf(" ");

        for (int j = 0; j < i+1; j++) printf("%d ", factorial(i)/(factorial(j) * factorial(i-j)));
        
        printf("\n");
    }

    return 0;
}


