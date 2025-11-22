#include <stdio.h>

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number % 3 == 0 && number % 5 == 0)                         // Check divisibility by both 3 and 5 or just by 15
    {
        printf("The number is divisible by both 3 and 5\n");
    }
    
    else if (number % 3 == 0)
    {
        printf("The number is divisible by 3 and not by 5\n");
    }
    
    else if (number % 5 == 0)
    {
        printf("The number is divisible by 5 and not by 3\n");
    }
    
    else
    {
        printf("The number is not divisible by either 3 or 5\n");
    }
    return 0;
}