#include <stdio.h>
#include <math.h>

int main()
{
    int choice;
    printf("Menu:\n");
    printf("1. Square\n2. Square Root\n3. Cube\n");

    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
        {
            int num;
            printf("Enter a number to find its square: ");
            scanf("%d", &num);
            printf("Square of %d is %d.\n", num, num*num);
            break;
        }
        case 2:
        {
            double num;
            printf("Enter a number to find its square root: ");
            scanf("%lf", &num);
            if (num < 0)
                printf("Square root of negative number is not defined in real numbers.\n");
            else
                printf("Square root of %.2lf is %.2lf.\n", num, sqrt(num));
            break;
        }
        case 3:
        {
            int num;
            printf("Enter a number to find its cube: ");
            scanf("%d", &num);
            printf("Cube of %d is %d.\n", num, num*num*num);
            break;
        }
        default:
            printf("Invalid choice. Please select a valid option (1-3).\n");
            break;
    }
    return 0;
}