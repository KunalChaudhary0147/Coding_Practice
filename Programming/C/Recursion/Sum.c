#include <stdio.h>

int sum(int a)
{
    if (a == 1) return 1;
    else return a + sum(a-1);
}

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    printf("Sum of first %d natural numbers is: %d\n", n, sum(n));

    return 0;
}