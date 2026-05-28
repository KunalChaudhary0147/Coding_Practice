#include <stdio.h>

int main()
{
    int n, rev = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("The reverse of %d is ", n);
    while (n != 0)
    {
        rev = (rev + (n%10))*10;
        n /= 10;
    }

    rev /= 10;

    printf("%d", rev);
    return 0;
}