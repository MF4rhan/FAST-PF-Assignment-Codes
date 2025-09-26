#include <stdio.h>
int main()
{
    int A, B;
    printf("Enter the First number.\n");
    scanf("%d",&A);
    printf("Enter the Second number.\n");
    scanf("%d",&B);
    printf("The result of using the BitWise operator & is %d\n", A&B);
    printf("The result of using the BitWise operator | is %d\n", A|B);
    printf("The result of using the BitWise operator ~ on %d is %d\n", A, ~A);
    printf("The result of using the BitWise operator << is %d\n", A<<1);
    printf("The result of using the BitWise operator >> is %d\n", A>>1);
return 0;
}