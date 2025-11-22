#include <stdio.h>

int main()
{
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int a = n - i;
        int c = 65;
        
        for (int j = 1; j <= n; j++)
        {
            if (j > a) { printf("%c", c); c++;}

            else printf(" ");
        }
        
        printf("\n");
    }
    
    return 0;
}