#include <stdio.h>

int main()
{
    int n;

    printf("Enter no. of rows:");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int k = 65;
        for (int j = 1; j < 2*n; j++)
        {
            if (j <= n-i || j >= n+i) printf("%c", k);
            else printf(" ");
            k++;
        }
        printf("\n");
    }
    return 0;
}