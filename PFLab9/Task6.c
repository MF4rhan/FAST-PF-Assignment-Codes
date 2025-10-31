#include <stdio.h>
void calculate(int a, int b, int *totalsum, float *totalavg);
int main()
{
    int num1, num2, sum;
    float avg;
    printf("Enter two numbers.\n");
    scanf("%d %d", &num1, &num2);
    calculate(num1, num2, &sum, &avg);
    printf("\nThe sum of both numbers is: %d", sum);
    printf("\nThe average of both numbers is: %.2f", avg);
return 0;
}

void calculate(int a, int b, int *totalsum, float *totalavg)
{
    *totalsum = a + b;
    *totalavg = *totalsum/2.0;
}