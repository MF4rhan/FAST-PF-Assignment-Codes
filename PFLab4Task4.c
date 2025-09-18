#include <stdio.h>
int main()
{
    int Marks;
    printf("Enter your Marks.\n");
    scanf("%d",&Marks);
    if (Marks>=90)
    {
        printf("You have obtained A grade.");
    }
    else if (Marks>=80 && Marks<90)
    {
        printf("You have obtained B grade.");
    }
    else if (Marks>=70 && Marks<80)
    {
        printf("You have obtained C grade.");
    }
    else if (Marks>=60 && Marks<70)
    {
        printf("You have obtained D grade.");
    }
    else
    {
        printf("You have obtained F grade.");
    }
    return 0;
}