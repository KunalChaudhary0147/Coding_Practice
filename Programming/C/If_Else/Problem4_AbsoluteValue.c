#include <stdio.h>

int main()
{
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);
    
    if (n < 0)
    {
        n = -n;
        printf("The absolute value is %d\n", n);
    }

    else
    {
        printf("The absolute value is %d\n", n);
    }

    return 0;
}