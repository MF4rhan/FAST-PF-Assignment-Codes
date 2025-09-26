#include <stdio.h>
int main()
{
    int Op;
    float Num1, Num2;
    printf("Enter any two numbers (seperated by space).\n");
    scanf("%f %f", &Num1, &Num2);
    printf("Enter 1 for Addition, 2 for Subtraction, 3 for Product and 4 for Division.\n");
    scanf("%d", &Op);
    switch (Op)
    {
    case 1:
        printf("The sum of %.2f and %.2f is %.2f.\n", Num1, Num2, Num1+Num2);
        break;
    case 2:
        printf("The difference of %.2f and %.2f is %.2f.\n", Num1, Num2, Num1-Num2);
        break;
    case 3:
        printf("The product of %.2f and %.2f is %.2f.\n", Num1, Num2, Num1*Num2);
        break;
    case 4:
        printf("The quotient of %.2f and %.2f is %.2f.\n", Num1, Num2, Num1/Num2);
        break;
    default:
        printf("Invalid Operation Number, Please Enter 1, 2, 3 or 4 only.");
        break;
    }
    return 0;
}