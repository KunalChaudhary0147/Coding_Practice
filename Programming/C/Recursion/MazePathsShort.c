// Only down and right
#include <stdio.h>

int ways(int er, int ec)
{
    int rightways = 0;
    int downways = 0;

    if (er == 1 && ec == 1) return 1;

    if (ec > 1) rightways = ways (er, ec - 1);

    if (er > 1) downways = ways (er - 1, ec);

    return rightways + downways;
}

int main ()
{
    int row, column;
    printf("Enter the no. of rows and column: ");
    scanf("%d %d", &row, &column);

    printf("Number of ways to reach the end: %d", ways(row, column));

    return 0;
}