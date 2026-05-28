#include <stdio.h>

int main()
{
    int n, current_number, largest_number = 0;

    printf("Enter the number of times: ");
    scanf("%d",n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter the number: ");
        scanf("%d", current_number);

        if (current_number > largest_number) largest_number = current_number;
    }

    printf("Largest number: %d", largest_number);

    return 0;
}