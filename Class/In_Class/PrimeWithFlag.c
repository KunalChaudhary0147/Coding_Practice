#include <stdio.h>

int main()
{
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    int flag = 0;

    for (int i = 2; i <= num/2; i++)
    {
        if (num % i == 0)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
        printf("%d is a prime number.\n", num);

    else
        printf("%d is not a prime number.\n", num);

    return 0;
}