#include <stdio.h>

int main()
{
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number % 5 == 0 || number % 3 == 0)                        // if ( (number % 5 == 0 || number % 3 == 0) && number % 15 == 0)
    {
        if (number % 15 != 0)
        {
            printf("The number is not divisible by 15.\n");
        }

        else
        {
            printf("The number is divisible by 15\n");
        }
    }

    else
    {
        printf("The number is neither divisible by 3 nor by 5.\n");
    }

    return 0;
}