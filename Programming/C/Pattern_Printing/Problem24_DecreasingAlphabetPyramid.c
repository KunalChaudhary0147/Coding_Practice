#include <stdio.h>

int main()
{
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    for (int i = 1; i <=n; i++)
    {
        int mid = n;
        int a = 65;

        for (int j = 1; j <= (2*n - 1); j++)
        {
            if (j <= mid - i || j >= mid + i) printf(" ");

            else if (j >= mid - i && j < mid) printf("%c", a++);

            else if (j == mid) printf("%c", a);

            else printf("%c", --a);
        }

        printf("\n");
    }
    return 0;
}