#include <stdio.h>

void fibonacci(int n)
{
    int t1 = 0, t2 = 1, nextTerm;

    if (n == 1) printf("Fibonacci Series: %d\n", t1);

    else printf("Fibonacci Series: %d, %d, ", t1, t2);

    for (int i = 3; i <= n; i++)
    {
        nextTerm = t1 + t2;
        printf("%d, ", nextTerm);
        t1 = t2;
        t2 = nextTerm;
    }
    printf("\n");
    return;
}

int main()
{
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    fibonacci(n);

    return 0;
}