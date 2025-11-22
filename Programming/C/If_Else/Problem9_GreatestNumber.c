#include <stdio.h>

int main()
{
    int number1, number2, number3;

    printf("Enter first number: ");
    scanf("%d", &number1);

    printf("Enter second number: ");
    scanf("%d", &number2);

    printf("Enter third number: "); 
    scanf("%d", &number3);

    if (number1 < 0 || number2 < 0 || number3 < 0)               // Check if any of the numbers is negative
    {
        printf("Please enter non-negative numbers only.\n");
        return 1; // Exit the program with an error code
    }

    else if (number1 >= number2 && number1 >= number3)                  // Check if number1 is the greatest
    {
        printf("The greatest number is: %d\n", number1);
    }
    
    else if (number2 >= number1 && number2 >= number3)             // Check if number2 is the greatest
    {
        printf("The greatest number is: %d\n", number2);
    }
    
    else                                                            // If both above conditions are false, then number3 is the greatest
    {
        printf("The greatest number is: %d\n", number3);
    }
    return 0;
}