// Only down and right
#include <stdio.h>

int ways(int sr, int sc, int er, int ec)
{
    int rightways = 0;
    int downways = 0;

    if (sr == er && sc == ec) return 1;

    if (sc < ec) rightways = ways (sr, sc + 1, er, ec);

    if (sr < er) downways = ways (sr + 1, sc, er, ec);

    return rightways + downways;
}

int main ()
{
    int row, column;
    printf("Enter the no. of rows and column: ");
    scanf("%d %d", &row, &column);

    printf("Number of ways to reach the end: %d", ways(1, 1, row, column));

    return 0;
}