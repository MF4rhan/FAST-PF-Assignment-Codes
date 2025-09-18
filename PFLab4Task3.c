#include <stdio.h>
int main()
{
    int Num1,Num2,Num3;
    printf("Enter three numbers(seperated by a space) to show the largest.\n");
    scanf("%d %d %d",&Num1,&Num2,&Num3);
    if (Num1>Num2 && Num1>Num3)
    {
        printf("%d is the largest number.",Num1);
    }
    else if (Num2>Num1 && Num2>Num3)
    {
        printf("%d is the largest number.",Num2);
    }
    else if (Num3>Num1 && Num3>Num2)
    {
        printf("%d is the largest number.",Num3);
    }
    else
    {
        printf("All three numbers are equal.");
    }
    return 0;
}