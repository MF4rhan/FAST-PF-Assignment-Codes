#include <stdio.h>
int main()
{
    //Name: Muhammad Farhan, Roll no: 25k-0538, BCS-1k.
    int score[10];
    int avgup=0, highest=0, lowest=0, highindex, lowindex, modscore;
    //Taking user input for the student grades in any order and storing the highest/lowest score for later use.
   for (int i = 0; i <=9; i++)
   {
    printf("Enter your student grade #%d (total 10 student grades).\n", i+1);
    scanf(" %d", &score[i]);
    if (i==0)
    {
        highest=score[i];
        highindex=i;
        lowest=score[i];
        lowindex=i;
    }
    if (score[i]>highest)
    {
        highest=score[i];
        highindex=i;
    }
    else if (score[i]<lowest)
    {
        lowest=score[i];
        lowindex=i;
    }

    }
    //printing student grades and summing all scores for numerator for average calculation in next step.
    printf("\n\n  Student    \tGrade");
    for (int i = 0; i <=9 ; i++)
    {
        printf("\nStudent #%d\t %d",i+1, score[i]);
        avgup+=score[i];
    }
    //printing average, highest grade, lowest grade, and their indices.
    printf("\nTotal Class Average = %.3f", avgup/10.0);
    printf("\nHighest grade = %d\t index = %d", highest, highindex);
    printf("\nLowest Grade = %d\t index = %d", lowest, lowindex);
    //asking for the new modfied/replacement for the lowest score in class and resetting the average.
    printf("\n\nEnter your desired score to modify(replace) the lowest score of the class.\n");
    scanf("%d", &modscore);
    score[lowindex]=modscore;
    avgup=0;
    //Recalculating the new average numerator, highest grade, lowest grade and their indices.
    for (int i = 0; i <= 9; i++)
    {
        avgup+=score[i];
        if (i==0)
    {
        highest=score[i];
        highindex=i;
        lowest=score[i];
        lowindex=i;
    }
    if (score[i]>highest)
    {
        highest=score[i];
        highindex=i;
    }
    else if (score[i]<lowest)
    {
        lowest=score[i];
        lowindex=i;
    }
    }
    //printing the new updated scores, average, highest, lowest and their indices.
    printf("\n\nUpdated Class Grades:\n");
    printf("\n\n  Student    \tGrade");
    for (int i = 0; i <=9 ; i++)
        printf("\nStudent #%d\t %d",i+1, score[i]);
    printf("\nUpdated Total Class Average = %.3f", avgup/10.0);
    printf("\nUpdated Highest grade = %d\t index = %d", highest, highindex);
    printf("\nUpdated Lowest Grade = %d\t index = %d", lowest, lowindex);
return 0;
}