#include <stdio.h>

int main()
{
    int n;

    printf("Enter an number: ");
    scanf("%d", &n);

    // if (n % 2 == 0)
    //     printf("%d is an Even number.\n", n);

    // else
    //     printf("%d is an Odd number.\n", n);

    // Ternary Operator:
    // Expression ? value_if_true : value_if_false;
    
    n % 2 == 0 ? printf("%d is an Even number.\n", n) : printf("%d is an Odd number.\n", n);

    return 0;
}