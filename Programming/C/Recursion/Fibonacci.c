#include <stdio.h>

void Fibonacci (int a, int b, int n)
{
    if (n == 0) return;
    printf("%d ", a);
    Fibonacci(b, a + b, n - 1);
}

int main ()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    Fibonacci(0, 1, n);

    return 0;
}