#include <stdio.h>

int main()
{
    int n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    int a = 0, b = 1, c;

    printf("%d\n", a);
    printf("%d\n", b);

    for (int i = 1; i <= n - 2; i++)
    {
        c = a + b;
        a = b;
        b = c;

        printf("%d\n", c);
    }
    
    return 0;
}