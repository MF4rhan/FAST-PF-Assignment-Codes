#include <stdio.h>
int main()
{
    int Day;
    printf("Enter a value between 1-7 and I will state the corresponding day of the week.\n");
    scanf("%d", &Day);
    switch (Day)
    {
    case 1:
        printf("The day is Monday.");
        break;
    case 2:
        printf("The day is Tuesday.");
        break;
    case 3:
        printf("The day is Wednesday.");
        break;
    case 4:
        printf("The day is Thursday.");
        break;
    case 5:
        printf("The day is Friday.");
        break;
    case 6:
        printf("The day is Saturday.");
        break;
    case 7:
        printf("The day is Sunday.");
        break;
    default:
        printf("The input value is out of range of 1-7.");
        break;
    }
return 0;
}