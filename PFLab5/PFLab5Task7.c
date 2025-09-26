#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the first number.\n");
    scanf("%d", &a);
    printf("Enter the second number.\n");
    scanf("%d", &b);
    printf("The sum of %d and %d is %d.\n", a, b, a+b);
    printf("The difference of %d and %d is %d.\n", a, b, a-b);
    printf("The product of %d and %d is %d.\n", a, b, a*b);
    printf("The quotient of %d and %d is %d.\n", a, b, a/b);
    printf("The remainder when %d divided by %d is %d.\n", a, b, a%b);
return 0;
}