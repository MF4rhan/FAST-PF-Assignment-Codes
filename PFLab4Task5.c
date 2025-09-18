#include <stdio.h>
int main()
{
    int color;
    printf("Enter 1 for Red, 2 for Yellow, 3 for Green.\n");
    scanf("%d", &color);
    switch (color)
    {
    case 1:
        printf("Stop.\n");
        break;
    case 2:
        printf("Ready.\n");
        break;
    case 3:
        printf("Go.\n");
        break;
    default:
    printf("Invalid Input, Please enter 1 or 2 or 3.");
        break;
    }
    return 0;
}