#include <stdio.h>

int main()
{
    int no1, no2;
    printf("Enter two numbers(number1 number2): ");
    scanf("%d %d", &no1, &no2);

    if (no1 > no2) printf("%d is greater than %d.\n", no1, no2);

    else if (no1 < no2) printf("%d is greater than %d.\n", no2, no1);

    else printf("%d is equal to %d.\n", no2, no1);

    return 0;
}