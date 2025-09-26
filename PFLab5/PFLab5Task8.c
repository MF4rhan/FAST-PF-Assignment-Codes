#include <stdio.h>
int main()
{
    int A, B;
    printf("Enter the First number.\n");
    scanf("%d",&A);
    printf("Enter the Second number.\n");
    scanf("%d",&B);
    printf("The result of using the realational operator == is %d\n", A==B);
    printf("The result of using the realational operator > is %d\n", A>B);
    printf("The result of using the realational operator < is %d\n", A<B);
    printf("The result of using the realational operator != is %d\n", A!=B);
    printf("The result of using the realational operator >= is %d\n", A>=B);
    printf("The result of using the realational operator <= is %d\n", A<=B);
return 0;
}