#include <stdio.h>
#include <stdlib.h>
int add(int a, int b);
int sub(int a, int b);
int multi(int a, int b);
int divide(int a, int b);
int main()
{
    int num1, num2, choice, result;
    int (*operation)(int, int);
    printf("\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit\nEnter your choice.\n");
    scanf("%d", &choice);
    if (choice==5)
    {
        exit(0);
    }
    printf("\nEnter two numbers.\n");
    scanf("%d %d", &num1, &num2);
    switch (choice)
    {
    case 1:
        operation = &add;
        break;
    case 2:
        operation = &sub;
        break;
    case 3:
        operation = &multi;
        break;
    case 4:
        operation = &divide;
        break;
    default:
        printf("invalid choice.\n");
        return 1;
    }
    result = operation(num1, num2);
    printf("Result: %d", result);
return 0;
}
int add(int a, int b)
{
    return a+b;
}
int sub(int a, int b)
{
    return a-b;
}
int multi(int a, int b)
{
    return a*b;
}
int divide(int a, int b)
{
    return b==0?0:a/b;
}