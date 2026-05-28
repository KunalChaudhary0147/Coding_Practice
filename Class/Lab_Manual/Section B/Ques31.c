#include <stdio.h>

int main()
{
    int num;
    printf("Enter an number: ");
    scanf("%d", &num);

    switch (num)
    {
        case 1:
            printf("Monday");
            break;
        case 2:
            printf("Tuesday");
            break;
        case 3:
            printf("Wednesday");
            break;
        case 4:
            printf("Thursday");
            break;
        case 5:
            printf("Friday");
            break;
        case 6:
            printf("Saturday");
            break;
        case 7:
            printf("Sunday");
            break;
        default:
            printf("Invalid Input. Please enter a number between 1 to 7.");
            break;
    }
    return 0;
}