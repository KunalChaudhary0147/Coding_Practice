#include <stdio.h>

int main()
{
    float percentage;

    printf("Enter your percentage: ");
    scanf("%f", &percentage);

    if (percentage >= 75) printf("A grade for %.2f%% percentage.", percentage);
    
    else printf("B grade for %.2f%% percentage.", percentage);
    
    return 0;
}