#include <stdio.h>

int main()
{
    float length, breadth, area, perimeter;

    printf("Enter length of rectangle: ");
    scanf("%f", &length);

    printf("Enter breadth of rectangle: ");
    scanf("%f", &breadth);

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    if (area > perimeter)
    {
        printf("Area is greater than Perimeter\n");
    }
    
    else if (area < perimeter)
    {
        printf("Perimeter is greater than Area\n");
    }
    
    else
    {
        printf("Area is equal to Perimeter\n");
    }
    
    return 0;
}