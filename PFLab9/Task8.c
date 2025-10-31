#include <stdio.h>
int main()
{
    int integer=22;
    float number=3.14;
    char letter='F';
    void *ptr;
    ptr = &integer;
    printf("The value in int variable is: %d\n", *(int *)ptr);
    ptr = &number;
    printf("The value in float variable is: %f\n", *(float *)ptr);
    ptr = &letter;
    printf("The value in char variable is: %c\n", *(char *)ptr);
return 0;
}