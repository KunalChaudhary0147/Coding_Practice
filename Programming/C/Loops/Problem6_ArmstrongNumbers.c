#include <stdio.h>

int main ()
{
    for (int i = 1; i < 500; i++)
    {
        int Sum_of_Cubes = 0;

        for (int j = i; j > 0; j = j / 10)
        {
            int last_digit = j % 10;
            Sum_of_Cubes = Sum_of_Cubes + (last_digit * last_digit * last_digit);
        }

        if (Sum_of_Cubes == i)
            printf("%d\n", i);
        
        else
            continue;
    }

    return 0;
}