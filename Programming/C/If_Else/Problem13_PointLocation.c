#include <stdio.h>

int main()
{
    int x, y;

    printf("Enter the coordinates (x y): ");
    scanf("%d %d", &x, &y);

    if (x > 0 && y > 0)
        printf("The point (%d, %d) is in the First quadrant.\n", x, y);

    else if (x < 0 && y > 0)
        printf("The point (%d, %d) is in the Second quadrant.\n", x, y);

    else if (x < 0 && y < 0)
        printf("The point (%d, %d) is in the Third quadrant.\n", x, y);

    else if (x > 0 && y < 0)
        printf("The point (%d, %d) is in the Fourth quadrant.\n", x, y);

    else if (x == 0 && y != 0)
        printf("The point (%d, %d) is on the Y-axis.\n", x, y);

    else if (y == 0 && x != 0)
        printf("The point (%d, %d) is on the X-axis.\n", x, y);

    else
        printf("The point (%d, %d) is at the Origin.\n", x, y);
        
    return 0;
}