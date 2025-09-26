#include <stdio.h>
int main()
{
    char num, grade;
    printf("Enter your course number(1, 2 or 3).\n");
    scanf(" %c", &num);
    switch (num)
    {
    case '1':
        printf("Enter your grade (A, B, C, D, or F).\n");
        scanf(" %c", &grade);
        switch (grade)
        {
        case 'A':
            printf("Your performance was Excellent.\n");
            break;
        case 'B':
            printf("Your performance was Good.\n");
            break;
        case 'C':
            printf("Your performance was mediocre.\n");
            break;
        case 'D':
            printf("Your performance was Lacking, More practice and study needed.\n");
            break;
        case 'F':
            printf("You Failed, The course needs to be repeated.\n");
            break;
        default:
            printf("invalid grade input, please try again.\n");
            break;
        }
        break;
    case '2':
        printf("Enter your grade (A, B, C, D, or F).\n");
        scanf(" %c", &grade);
        switch (grade)
        {
        case 'A':
            printf("Your performance was Excellent.\n");
            break;
        case 'B':
            printf("Your performance was Good.\n");
            break;
        case 'C':
            printf("Your performance was mediocre.\n");
            break;
        case 'D':
            printf("Your performance was Lacking, More practice and study needed.\n");
            break;
        case 'F':
            printf("You Failed, The course needs to be repeated.\n");
            break;
        default:
             printf("invalid grade input, please try again.\n");
            break;
        }
        break;
    case '3':
        printf("Enter your grade (A, B, C, D, or F).\n");
        scanf(" %c", &grade);
        switch (grade)
        {
        case 'A':
            printf("Your performance was Excellent.\n");
            break;
        case 'B':
            printf("Your performance was Good.\n");
            break;
        case 'C':
            printf("Your performance was mediocre.\n");
            break;
        case 'D':
            printf("Your performance was Lacking, More practice and study needed.\n");
            break;
        case 'F':
            printf("You Failed, The course needs to be repeated.\n");
            break;
        default:
            printf("invalid grade input, please try again.\n");
            break;
        }
        break;
    default:
        printf("Invalid number input, please try again.\n");
        break;
    }
return 0;
}