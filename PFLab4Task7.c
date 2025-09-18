#include <stdio.h>
int main()
{
    int year;
    printf("Enter a Year to check if its a Leap Year.\n");
    scanf("%d", &year);
    if (year%400==0 || year%4==0 && year%100!=0)
    {
        printf("It is a Leap Year.");
    }
    else
    {
        printf("It is Not a Leap Year.");
    }
    return 0;
}