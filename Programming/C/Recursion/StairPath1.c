// Only 1 or 2 step at a time
#include <stdio.h>

int Ways(int n)
{
    if (n == 0 || n == 1 || n == 2) return n;
    return Ways(n - 1) + Ways(n - 2);
}

int main()
{
    int n;
    printf("Enter the number of stairs: ");
    scanf("%d", &n);

    printf("Number of ways to reach the top: %d\n", Ways(n));

    return 0;
}