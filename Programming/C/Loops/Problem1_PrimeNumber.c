#include <stdio.h>

int main()
{
    int n;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Please enter a valid positive integer.\n");
        return 0;
    }

    int a = 0;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            printf("%d is a factor of %d and thus, it is not a Prime number.\n", i, n);
            a = 1;
            break;
        }
    }

    if (n == 1)
        printf("%d is neither Prime nor Composite number.\n", n);

    else if (a == 0)
        printf("%d is a Prime number.\n", n);

    return 0;
}