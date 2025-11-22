#include <stdio.h>

int main()
{
    float x1, y1, x2, y2, x3, y3, a, b;

    printf("Enter coordinates of first point (x1 y1): ");
    scanf("%f %f", &x1, &y1);

    printf("Enter coordinates of second point (x2 y2): ");
    scanf("%f %f", &x2, &y2);

    printf("Enter coordinates of third point (x3 y3): ");
    scanf("%f %f", &x3, &y3);

    a = (y2 - y1) / (x2 - x1);
    b = (y3 - y2) / (x3 - x2);

    if (a == b)
    {
        printf("The points are in a straight line.\n");
    }
    
    else
    {
        printf("The points are not in a straight line.\n");
    }
    
    return 0;
}