#include <stdio.h>
#include <string.h>

int main()
{
    printf("My roll number: %d\n", 122);
    printf("My roll number (without string) : %dCSU%d\n", 25, 122);
    printf("My exact roll number (using string): %s\n", "25CSU122");
    printf("My section: %c\n", 'C');
    printf("My section: '%c'\n", 'C');
    printf("My section: \"%c\"\n", 'C');
    printf("My percentage: %.2f %%\n", 90.0);

    return 0;
}