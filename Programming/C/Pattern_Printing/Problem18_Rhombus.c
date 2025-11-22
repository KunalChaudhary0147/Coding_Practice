#include <stdio.h>

int main()
{
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int a = n-i;
        
        for (int j = 1; j <= (2*n - i); j++)
        {
            if (j > a) printf("*");

            else printf(" ");
        }
        
        printf("\n");
    }
    
    return 0;
}