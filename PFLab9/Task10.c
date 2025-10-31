#include <stdio.h>
float average(int a, int b, int c);
int main()
{
    int num1=5, num2=16, num3=78;
    printf("%f", average(num1, num2, num3));
}

float average(int a, int b, int c)
{
    return (a+b+c)/3.0;
}