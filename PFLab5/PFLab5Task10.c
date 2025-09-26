#include <stdio.h>
int main()
{
    int x, y, z;
    printf("Enter the First number.\n");
    scanf("%d", &x);
    printf("Enter the Second number.\n");
    scanf("%d", &y);
    printf("Enter the Third number.\n");
    scanf("%d", &z);
    if (x>y && x>z)
    {
        printf("%d is the largest.\n", x);
    }
    else if (y>x && y>z)
    {
        printf("%d is the largest.\n", y);
    }
    else if (z>x && z>y)
    {
        printf("%d is the largest.\n", z);
    }
    else
    {
        printf("The numbers are equal.\n");
    }
return 0;
}