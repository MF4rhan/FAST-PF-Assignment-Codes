#include <stdio.h>
int main()
{
    int nnn,j=1;
    printf("Enter a number.\n");
    scanf("%d", &nnn);
    for (int i=1;i<=nnn;i++)
    {
        j*=i;
    }
    printf("The value of the factorial %d! is %d.\n", nnn, j);
return 0;
}
