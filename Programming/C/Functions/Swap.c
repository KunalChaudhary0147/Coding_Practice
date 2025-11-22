#include <stdio.h>

void swap (int *a, int *b)
{
    (*a) = (*a) + (*b); (*b) = (*a) - (*b); (*a) = (*a) - (*b);
}

int main ()
{
    int a, b;
    printf("Enter a and b: ");
    scanf("%d %d", &a, &b);

    printf("%p %p\n", &a, &b); // %p is the format specifier to print the address of a variable

    // int *pa = &a; int *pb = &b;

    swap(&a, &b);

    printf("After swapping, a = \'%d\' and b = \'%d\'", a, b);
    return 0;
}