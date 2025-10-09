#include <stdio.h>
int main()
{
    int num,sum=0;
    char z='y';
    while (z=='y'||z=='Y')
    {
        printf("\nEnter a number to add to total sum.\n");
        scanf("%d", &num);
        sum+=num;
        printf("Do you want to enter another number? (y/n)\n");
        scanf(" %c", &z);
    }
    printf("The total sum of all numbers is %d\n", sum);
return 0;
}
