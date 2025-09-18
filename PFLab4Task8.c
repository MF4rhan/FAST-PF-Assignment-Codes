#include <stdio.h>
int main()
{
    int Num;
    printf("Enter a number and I will check if it is positive, negative, or zero.\n");
    scanf("%d", &Num);
    if (Num>0)
    {
        printf("%d is a Positive Number.", Num);
    }
    else if (Num<0)
    {
        printf("%d is a Negative Number.", Num);
    }
    else
    {
        printf("The input number is Zero.");
    }
    return 0;
}