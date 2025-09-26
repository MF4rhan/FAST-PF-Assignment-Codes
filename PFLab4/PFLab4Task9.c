#include <stdio.h>
int main()
{
    int Day;
    printf("Enter a number (1-7) to get the respective day of the week.\n");
    scanf("%d",&Day);
    switch (Day)
    {
    case 1:
        printf("Monday.\n");
        break;
    case 2:
        printf("Tuesday.\n");
        break;
    case 3:
        printf("Wednesday.\n");
        break;
    case 4:
        printf("Thursday.\n");
        break;
    case 5:
        printf("Friday.\n");
        break;
    case 6:
        printf("Saturday.\n");
        break;
    case 7:
        printf("Sunday.\n");
        break;
    default:
    printf("Invalid Input, Please enter a number 1 - 7.");
        break;
    }
    return 0;
}