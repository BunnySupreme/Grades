#include <stdio.h>
#include <stdlib.h>

// reads 3 grades (format: NNN), checks correctness
// gives output based on grade

//int checkCorrectness(int numberGrades, int grade[numberGrades+1]);

int main()
{
    //int numberGrades = 3;
    int grades = 0;
    int firstGrade = 0;
    int secondGrade = 0;
    int thirdGrade = 0;
    int gradeCalculator=0; //variable to help us calculate individual grades
    //int correct = 1;
    printf("Noten: ");
    scanf("%d", &grades);
    //correct = checkCorrectness(numberGrades, grade);
    if (grades > 999 || grades < 100)
    {
        printf("Erwarte genau 3 Noten!");
        return 0;
    }

    thirdGrade = grades % 10;
    gradeCalculator = grades / 10;
    secondGrade = gradeCalculator % 10;
    gradeCalculator = gradeCalculator / 10;
    firstGrade = gradeCalculator;

    if (firstGrade < 1 || firstGrade > 5)
    {
        printf("Erste Note muss zwischen 1 und 5 liegen!");
        return 0;
    }

    if (secondGrade < 1 || secondGrade > 5)
    {
        printf("Zweite Note muss zwischen 1 und 5 liegen!");
        return 0;
    }

    if (thirdGrade < 1 || thirdGrade > 5)
    {
        printf("Dritte Note muss zwischen 1 und 5 liegen!");
        return 0;
    }

    if (grades == 111)
    {
        printf("Ausgezeichneter Erfolg!");
    }

    else if (grades == 112 || grades == 121 || grades == 211)
    {
        printf("Guter Erfolg!");
    }
    else if (firstGrade == 5 || secondGrade == 5 || thirdGrade == 5)
    {
        printf("Nicht bestanden!");
    }
    else
    {
        printf("Bestanden.");
    }

    return 0;
}
/*
int checkCorrectness(int numberGrades, int grade[numberGrades])
{
    for (int i=0; i<numberGrades; i++)
    {
        if (grade[i]>5 || grade[i]<0)
        {
            return 0;
        }
    }
    return 1;
}
*/
