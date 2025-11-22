#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter three numbers (a b c): ");
    scanf("%d %d %d", &a, &b, &c);

    if (a <= b && a <= c) 
        printf("%d is the smallest defect dimension.\n", a);
    else if (b <= a && b <= c) 
        printf("%d is the smallest defect dimension.\n", b);
    else 
        printf("%d is the smallest defect dimension.\n", c);
    return 0;
}