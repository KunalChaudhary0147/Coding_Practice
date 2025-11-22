#include <stdio.h>

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number > 99 && number < 1000)
    {
        printf("The number is a 3-digit number\n");
    }
    
    else
    {
        printf("The number is not a 3-digit number\n");
    }
    
    return 0;
}