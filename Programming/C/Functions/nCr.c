#include <stdio.h>

int factorial (int num)
{
    if (num == 0 || num == 1)
        return 1;
    else
        return num * factorial(num - 1);
}

int main ()
{
    int n, r;

    printf("Enter n and r: ");
    scanf("%d %d", &n, &r);

    printf("nCr = %d\n", factorial(n));
}