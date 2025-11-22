#include <stdio.h>
#include <stdbool.h>

int main()
{
    int i;
    printf("enter a number : ");
    scanf("%d", &i);
    bool flag = true;
    for (int x = 2; x < i / 2; x++)
    {
        if (i % x == 0)
        {

            flag = false;
            break;
        }
    }
    flag ? printf("prime") : printf("composite");
    return 0;
}