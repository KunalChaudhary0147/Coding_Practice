#include <stdio.h>

int factorial(int a)
{   
    if (a == 1) return 1;

    else if (a == 2) return 2;

    else return a * factorial(a - 1);
}

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    if (n == 0 || n == 1) printf("Facorial of %d: %d\n", n, 1);

    for (int i = 1; i <= n; i++)
    {
        printf("Facorial of %d: %d\n", i, factorial(i));
    }
  
    return 0;
}