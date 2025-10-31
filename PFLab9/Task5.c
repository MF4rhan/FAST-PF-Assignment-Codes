#include <stdio.h>
void swap(int *, int *);
int main()
{
    int num1,num2;
    printf("Enter two numbers.\n");
    scanf("%d %d", &num1, &num2);
    printf("\nThe original numbers are: %d, %d\n", num1, num2);
    swap(&num1, &num2);
    return 0;
}

void swap(int *a, int *b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
    printf("The swapped numbers are: %d, %d\n", *a, *b);
}