#include <stdio.h>

int main()
{
    float radius = 7;
    float pi = 3.14159;
    float volume = 4 * pi * radius * radius * radius / 3;
    printf("Volume of Sphere with radius %.4f is : %.4f\n", radius, volume);  //%'.4'f is used to print float value up to 2 decimal places
    return 0;
}