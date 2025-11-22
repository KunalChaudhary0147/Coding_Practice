#include <stdio.h>

int main()
{
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int c = 65;
        int a = 1;

        for (int j = 1; j <= i; j++)
        {
            if (i % 2 != 0)
            {
                printf("%d ", a);
                a++;
            }

            else
            {
                printf("%c ", c);
                c++;
            }
        }
        
        printf("\n");
    }
    
    return 0;
}