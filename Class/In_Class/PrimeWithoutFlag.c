#include <stdio.h>

int main()
{
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    int i;

    for (i = 2; i <= num/2; i++)
    {
        if (num % i == 0)
        {
            break;
        }
    }

    if (i == num/2 + 1)
        printf("%d is a prime number.\n", num);

    else
        printf("%d is a not a prime number.\n", num);

    return 0;
}