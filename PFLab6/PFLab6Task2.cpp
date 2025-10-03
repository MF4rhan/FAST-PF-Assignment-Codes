#include <stdio.h>
int main()
{
    int i,j;
    int nnn;
    int counta=0,countprim=0,sum=0;
    printf("Enter the number.\n");
    scanf("%d",&nnn);
    for (i=1;i<=nnn;i++)
    {
        counta=0;
        for (j=1; j<=i; j++)
        {
            if (i%j == 0)
            {
                counta++;
            }
        }
        if (counta==2)
        {
            printf("%d is a prime number.\n",i);
            countprim++;
            sum +=i;
        }
    }
    printf("\nThere are %d prime numbers up to %d", countprim, nnn);
    printf("\nThe sum of all prime numbers is %d", sum);
return 0;
}
