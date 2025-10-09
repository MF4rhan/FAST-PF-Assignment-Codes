#include <stdio.h>
int main()
{
    int num,num2;
    printf("Enter a number.\n");
    scanf("%d", &num);
    for (int i=1;i<=10;i++)
    {
        num2=i*num;
        printf("%d x %d = %d\n",num,i,num2);
    }
return 0;
}
