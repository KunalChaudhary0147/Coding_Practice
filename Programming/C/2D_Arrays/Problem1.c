//Input roll no and marks of phy, chem, maths of n students

#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    int list[n][4];

    for (int i = 0; i < n; i++)
    {
        printf("Enter roll number of student %d: ", i + 1);
        scanf("%d", &list[i][0]);

        printf("Enter marks of physics, chemistry and maths: ");
        scanf("%d %d %d", &list[i][1], &list[i][2], &list[i][3]);

        printf("\n");
    }

    printf("\n\t\tRoll No.\tPhysics\t\tChemistry\tMaths\n");

    for (int i = 0; i < n; i++) printf("Student %d:\t%.4d\t\t%.4d\t\t%.4d\t\t%.4d\n", i + 1, list[i][0], list[i][1], list[i][2], list[i][3]);
    return 0;
}