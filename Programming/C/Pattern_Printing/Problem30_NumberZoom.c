#include <stdio.h>

int main()
{
    int n;
    printf("Enter the no. from where the pattern should start: ");
    scanf("%d", &n);

    for (int i = 1; i < 2*n; i++)
    {
        for (int j = 1; j < 2*n; j++)
        {
            int a = i;
            if (i > n) a = 2*n - i;

            int b = j;
            if (j > n) b = 2*n - j;

            a < b ? printf("%d", n+1-a) : printf("%d", n+1-b);
        }
        printf("\n");
    }
    return 0;
}