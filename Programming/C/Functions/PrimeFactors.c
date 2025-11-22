#include <stdio.h>

void IsPrime (int a)
{
    int count = 0;
    for (int i = 2; i <= a/2; a++)
    {
        if (a%i == 0)
        {
            count++;
            break;
        }
        else continue;
    }

    if (count == 0) printf("%d\n", a);
    else return;
}

void factor (int a)
{
    for (int i = 2; i <= a/2; i++)
    {
        if (a%i == 0) IsPrime(i);
        else continue;
    }
}


int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    factor(num);

    return 0;
}